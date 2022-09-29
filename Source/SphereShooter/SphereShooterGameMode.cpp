// Copyright Epic Games, Inc. All Rights Reserved.


#include "SphereShooterGameMode.h"
#include "SphereShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Balloon.h"
#include "Math/UnrealMathUtility.h"
#include "GameFramework/PlayerController.h"
#include "TimerManager.h"


ASphereShooterGameMode::ASphereShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

void ASphereShooterGameMode::StartPlay()
{
	Super::StartPlay();

	InitStartGame();
}

void ASphereShooterGameMode::ActorDied(AActor* DeadActor)
{
	if (ABalloon* BalloonDestroyed = Cast<ABalloon>(DeadActor)) {
		BalloonDestroyed->HandleDestruction();

		// find balloon spawn location in array and remove
		FSpawnLocData* SpawnData = SpawnLocationArray.FindByPredicate([&](FSpawnLocData data)
		{ return data.SpawnLocation == BalloonDestroyed->GetActorLocation(); });

		if (nullptr != SpawnData)
		{
			SpawnLocationArray.RemoveSingle(*SpawnData);
		}

		// find if any of marked balloons exists
		FSpawnLocData* data = SpawnLocationArray.FindByPredicate([&](FSpawnLocData data)
		{ return data.isObjective == true; });

		// destroy all balloons if marked balloons exists
		if (nullptr == data)
		{
			// show game over screen
			GameOver();

			TArray<AActor*> BalloonsArray;
			UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABalloon::StaticClass(), BalloonsArray);

			for (AActor* balloons : BalloonsArray)
			{
				Cast<ABalloon>(balloons)->HandleDestruction();
			}

			// reset array with spawning locations for balloons
			SpawnLocationArray.Reset();
			//next round
			GameData.Rounds++;

			//Timer to respawn balloons
			GetWorldTimerManager().SetTimer(RestartTimer, this, &ASphereShooterGameMode::InitStartGame, RestartDelay);
		}
	}
}

int32 ASphereShooterGameMode::SpawnBallons(TArray<FSpawnLocData>& PointsArray)
{
	int32 nSpawnCount = 0;
	for (FSpawnLocData SpawnData : PointsArray)
	{
		FTransform transform = FTransform(FRotator::ZeroRotator, SpawnData.SpawnLocation);

		ABalloon* balloon = GetWorld()->SpawnActorDeferred<ABalloon>(BallonClass, transform, nullptr, nullptr, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn);
		if (nullptr != balloon) {
			balloon->SetColor(SpawnData.isObjective ? FLinearColor::Red : FLinearColor::Black);
			balloon->setRadius(GameData.BalloonRadius);
			UGameplayStatics::FinishSpawningActor(balloon, transform);
			nSpawnCount++;
		}
	}
	return nSpawnCount;
}
void ASphereShooterGameMode::GenerateSpawnLocations(TArray<FSpawnLocData>& PointsArray, FVector StartSpawnLocation)
{
	int32 SpawnTries = 0; // tries to spawn balloons 
	int32 BallonsAbovePlayer = 0; // counter for balloons above the player

	for (int32 i = 0; i < GameData.SpawnBalloonsCount;)
	{
		FSpawnLocData SpawnData;
		// random vector relatively to player spawn location
		FVector NewRandomPoint = FVector(
			FMath::RandRange(-GameData.maxBalloonSpawnRadius, GameData.maxBalloonSpawnRadius),
			FMath::RandRange(-GameData.maxBalloonSpawnRadius, GameData.maxBalloonSpawnRadius),
			FMath::RandRange(-GameData.maxBalloonSpawnRadius, GameData.maxBalloonSpawnRadius)) + StartSpawnLocation;

		double SpawnAndNewPointDist = FVector::Distance(StartSpawnLocation, NewRandomPoint);

		// check the spawn point - inside the allowed radius
		if (GameData.maxBalloonSpawnRadius - SpawnAndNewPointDist >= GameData.BalloonRadius) {
			bool BallonInRange = true;

			//Generate next spawn location if number of required balloons not enough 
			if (BallonsAbovePlayer < GameData.WinBallonsCount &&
				(NewRandomPoint.Z < StartSpawnLocation.Z || // spawn location should be above the player location
				GameData.minBalloonSpawnRadius - SpawnAndNewPointDist < GameData.BalloonRadius)) // balloons should be inside the min radius
			{
				continue;
			}

			// Check distance to other balloons spawn points
			for (FSpawnLocData data : PointsArray)
			{
				double ExistsAndNewPointDistance = FVector::Distance(data.SpawnLocation, NewRandomPoint);
				ExistsAndNewPointDistance -= 2 * GameData.BalloonRadius;
				// check distance between balloons
				if (ExistsAndNewPointDistance <= GameData.DistanceBetweenBalloons) {
					SpawnTries++;
					BallonInRange = false;
					break;
				}
			}

			if (BallonInRange) {
				SpawnData.SpawnLocation = NewRandomPoint;

				//mark balloon as objective to hit for win
				if (BallonsAbovePlayer < GameData.WinBallonsCount && // dont mark more than the count
					NewRandomPoint.Z > StartSpawnLocation.Z &&		 // spawn location should be above the player location
					GameData.minBalloonSpawnRadius - SpawnAndNewPointDist >= GameData.BalloonRadius) // balloons should be inside the min radius
				{
					BallonsAbovePlayer++;
					SpawnData.isObjective = true;
				}

				PointsArray.Add(SpawnData);
				i++;
				SpawnTries = 0;
			}
			// if cant find the place for new balloon
			if (SpawnTries > GameData.MaxSpawnTries) {
				break;
			}
		}
	}
}
void ASphereShooterGameMode::InitStartGame()
{
	UWorld* world;
	APawn* playerPawn;

	world = GetWorld();
	if (nullptr != world) {
		playerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
		if (nullptr != playerPawn) {
			//Increase balloons each rounds
			GameData.SpawnBalloonsCount += GameData.Rounds * (GameData.SpawnBalloonsCount * GameData.BalloonRateCount / 100);
			GameData.maxBalloonSpawnRadius += GameData.Rounds * (GameData.maxBalloonSpawnRadius * GameData.RateBalloonSpawnRadius / 100);
			GameData.minBalloonSpawnRadius += GameData.Rounds * (GameData.minBalloonSpawnRadius * GameData.RateBalloonSpawnRadius / 100);

			PlayerSpawnLocation = playerPawn->GetActorLocation();

			DrawDebugSphere(world, PlayerSpawnLocation, GameData.maxBalloonSpawnRadius, 32, FColor::Red, false, 20, 0, 5);
			DrawDebugSphere(world, PlayerSpawnLocation, GameData.minBalloonSpawnRadius, 32, FColor::Green, false, 15, 0, 5);
			GenerateSpawnLocations(SpawnLocationArray, PlayerSpawnLocation);
			SpawnBallons(SpawnLocationArray);
		}
	}

}
