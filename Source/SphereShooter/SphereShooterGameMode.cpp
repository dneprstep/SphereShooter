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
			TArray<AActor*> BalloonsArray;
			UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABalloon::StaticClass(), BalloonsArray);

			for (AActor* balloons : BalloonsArray)
			{
				Cast<ABalloon>(balloons)->HandleDestruction();
			}

			// reset array with spawning locations for balloons
			SpawnLocationArray.Reset();

			// show game over screen
			NextRoundWIdget(GameData.RoundRestartDelay);

			//Timer to respawn balloons
			GetWorldTimerManager().SetTimer(RestartTimer, this, &ASphereShooterGameMode::InitStartGame, GameData.RoundRestartDelay);
		}
	}
}

int32 ASphereShooterGameMode::SpawnBallons(TArray<FSpawnLocData>& PointsArray)
{
	int32 nSpawnCount = 0;
	float BalloonRadiusPercent = GameData.BalloonRadiusPercent;
	for (FSpawnLocData SpawnData : PointsArray)
	{
		FTransform transform = FTransform(FRotator::ZeroRotator, SpawnData.SpawnLocation);

		ABalloon* balloon = GetWorld()->SpawnActorDeferred<ABalloon>(BallonClass, transform, nullptr, nullptr, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn);
		if (nullptr != balloon) {
			// Set balloon color according to they objective
			balloon->SetColor(SpawnData.isObjective ? FLinearColor::Red : FLinearColor::Black);

			//set balloon radius
			balloon->SetPercentRadius(BalloonRadiusPercent);
			UGameplayStatics::FinishSpawningActor(balloon, transform);
			nSpawnCount++;

			//decrease size of balloon each spawn till minimum size
			if (GameData.SphereRadiusStepPercent > 0 && BalloonRadiusPercent > GameData.MinSphereRadius) {
				BalloonRadiusPercent -= GameData.SphereRadiusStepPercent;
			}
		}
	}
	return nSpawnCount;
}
bool ASphereShooterGameMode::CheckSpawnLocation(FVector &NewRandomPoint, const FVector& StartSpawnLocation, bool& AbovePLayer, int32 BallonsAbovePlayer)
{
	bool Correct = false;

	//distance between new random location and start player location
	double SpawnAndNewPointDist = FVector::Distance(StartSpawnLocation, NewRandomPoint);

	// check the spawn point - inside the allowed radius
	if (GameData.maxBalloonSpawnRadius - SpawnAndNewPointDist >= GameData.BalloonRadius) {
		// count of balloons available to win
		if (BallonsAbovePlayer < GameData.WinBallonsCount) {
			if (NewRandomPoint.Z > StartSpawnLocation.Z &&   // spawn location above the player location
				GameData.minBalloonSpawnRadius - SpawnAndNewPointDist >= GameData.BalloonRadius) // balloons should be inside the min radius
			{
				Correct = true;
				AbovePLayer = true;
			}
		} else {
			Correct = true;
		}

		if (Correct)
		{
			// Check distance to other balloons spawn location
			for (FSpawnLocData data : SpawnLocationArray)
			{
				double ExistsAndNewPointDistance = FVector::Distance(data.SpawnLocation, NewRandomPoint);
				ExistsAndNewPointDistance -= 2 * GameData.BalloonRadius;
				// check distance between balloons
				if (ExistsAndNewPointDistance <= GameData.DistanceBetweenBalloons) {
					Correct = false;
					break;
				}
			}
		}
	}

	return Correct;
}
int32 ASphereShooterGameMode::GetRound()
{
	return GameData.Rounds;
}
void ASphereShooterGameMode::GenerateSpawnLocations(TArray<FSpawnLocData>& PointsArray, FVector StartSpawnLocation)
{
	int32 SpawnTries = 0; // tries to spawn balloons 
	int32 BallonsAbovePlayer = 0; // counter for balloons above the player

	for (int32 i = 0; i < GameData.SpawnBalloonsCount;)
	{
		FSpawnLocData SpawnData;
		bool AbovePLayer = false;
		float maxSpawnRadius = (BallonsAbovePlayer < GameData.WinBallonsCount) ? GameData.minBalloonSpawnRadius : GameData.maxBalloonSpawnRadius;

		// random vector relatively to start spawn location
		FVector NewRandomPoint = FVector(
			FMath::RandRange(-maxSpawnRadius, maxSpawnRadius),
			FMath::RandRange(-maxSpawnRadius, maxSpawnRadius),
			FMath::RandRange(-maxSpawnRadius, maxSpawnRadius)) + StartSpawnLocation;

		if (CheckSpawnLocation(NewRandomPoint, StartSpawnLocation, AbovePLayer, BallonsAbovePlayer)) {
			SpawnData.SpawnLocation = NewRandomPoint;
			if (AbovePLayer)
			{
				BallonsAbovePlayer++;
				SpawnData.isObjective = true;
			}
			PointsArray.Add(SpawnData);
			i++;
			SpawnTries = 0;
		} else {
			SpawnTries++;
		}
		// restart level if cant find the place to spawn balloon
		if (SpawnTries > GameData.MaxSpawnTries) {
			APlayerController *PlayerController = UGameplayStatics::GetPlayerController(this, 0);
			if (nullptr != PlayerController)
			{
				PlayerController->RestartLevel();
			}
			break;
		}
	}
}
void ASphereShooterGameMode::InitStartGame()
{
	UWorld* world;
	APawn* playerPawn;
	ABalloon* Balloon;

	world = GetWorld();
	if (nullptr != world) {
		playerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
		if (nullptr != playerPawn) {
			//Increase balloons each rounds
			GameData.SpawnBalloonsCount += GameData.Rounds * (GameData.SpawnBalloonsCount * GameData.BalloonRateCount / 100);
			GameData.maxBalloonSpawnRadius += GameData.Rounds * (GameData.maxBalloonSpawnRadius * GameData.RateBalloonSpawnRadius / 100);
			GameData.minBalloonSpawnRadius += GameData.Rounds * (GameData.minBalloonSpawnRadius * GameData.RateBalloonSpawnRadius / 100);
			Balloon = BallonClass->GetDefaultObject<ABalloon>();
			// set balloon radius according to scale percent
			if (nullptr != Balloon) {
				GameData.BalloonRadius = Balloon->GetRadius() * GameData.BalloonRadiusPercent / 100;
			}

			PlayerSpawnLocation = playerPawn->GetActorLocation();

			if (GameData.ShowDebugSphere) {
				DrawDebugSphere(world, PlayerSpawnLocation, GameData.maxBalloonSpawnRadius, 32, FColor::Red, false, 20, 0, 5);
				DrawDebugSphere(world, PlayerSpawnLocation, GameData.minBalloonSpawnRadius, 32, FColor::Green, false, 15, 0, 5);
			}
			GenerateSpawnLocations(SpawnLocationArray, PlayerSpawnLocation);
			SpawnBallons(SpawnLocationArray);

			//next round
			GameData.Rounds++;
		}
	}

}
