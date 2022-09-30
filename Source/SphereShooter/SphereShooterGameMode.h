// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SphereShooterGameMode.generated.h"

class ABalloon;

USTRUCT(BlueprintType)
struct FGameData {

	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, Category = "GameData", meta = (ClampMin = "2", ClampMax = "100"))
	int32 SpawnBalloonsCount = 15; // count of all balloons to spawn

	UPROPERTY(EditAnywhere, Category = "GameData")
	int32 WinBallonsCount = 10; // count of balloons to hit for win

	UPROPERTY(EditAnywhere, Category = "GameData", meta = (ClampMin = "1", ClampMax = "100"))
	float BalloonRateCount = 10.f; // balloons increase spawn rate count (percent of previous)

	UPROPERTY(EditAnywhere, Category = "GameData", meta = (ClampMin = "100", ClampMax = "5000"))
	float maxBalloonSpawnRadius = 2000.f; // max spawn balloons radius from player location

	UPROPERTY(EditAnywhere, Category = "GameData", meta = (ClampMin = "100", ClampMax = "5000"))
	float minBalloonSpawnRadius = 1500.f; // radius from player location with objective balloons to hit for win

	UPROPERTY(EditAnywhere, Category = "GameData", meta = (ClampMin = "0", ClampMax = "100"))
	float RateBalloonSpawnRadius = 5.f; // spawn balloons radius from player location rate

	UPROPERTY(EditAnywhere, Category = "GameData", meta = (ClampMin = "0", ClampMax = "1000"))
	float DistanceBetweenBalloons = 80.f; // min distance between balloons

	UPROPERTY(EditAnywhere, Category = "GameData", meta = (ClampMin = "5", ClampMax = "500"))
	float BalloonRadiusPercent = 50.f; // balloon radius in percent of normal

	UPROPERTY(EditAnywhere, Category = "GameData")
	int32 MaxSpawnTries = 100; // max balloons spawn tries

	UPROPERTY(VisibleAnywhere, Category = "GameData")
	int32 Rounds = 0; // current round

	UPROPERTY(EditAnywhere, Category = "GameData")
	bool ShowDebugSphere = true; // show debug spheres for spawn radius

	UPROPERTY(EditAnywhere, Category = "GameData")
	float MinSphereRadius = 5.f; // minimum sphere radius in percent of normal

	UPROPERTY(EditAnywhere, Category = "GameData", meta = (ClampMin = "0", ClampMax = "100"))
	float SphereRadiusStep = 0.f; // balloon decrease radius step for each spawn in round
};

USTRUCT(BlueprintType)
struct FSpawnLocData {
	GENERATED_USTRUCT_BODY()

	//balloon spawning location
	FVector SpawnLocation;
	//Is this balloon should be hit to win
	bool isObjective = false;

	//For handle with TArray
	bool operator==(const FSpawnLocData& V) const
	{
		return SpawnLocation == V.SpawnLocation && isObjective == V.isObjective;
	}
};

UCLASS(minimalapi)
class ASphereShooterGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ASphereShooterGameMode();

	virtual void StartPlay();

	void ActorDied(AActor* DeadActor);

	UPROPERTY(EditDefaultsOnly, Category = "GameData")
	TSubclassOf<ABalloon> BallonClass;

	UFUNCTION(BlueprintImplementableEvent)
	void GameOver();

private:
	UPROPERTY(VisibleAnywhere)
	FVector PlayerSpawnLocation;

	//Balloons spawn locations for current round
	TArray<FSpawnLocData> SpawnLocationArray;

	UPROPERTY(EditAnywhere)
	float RestartDelay = 3.f;

	UPROPERTY(EditDefaultsOnly, Category = "GameData")
	FGameData GameData;

	FTimerHandle RestartTimer;

	void  InitStartGame();
	
	int32 SpawnBallons(TArray<FSpawnLocData>& PointsArray);

	bool CheckSpawnLocation(FVector& NewRandomPoint, const FVector& StartSpawnLocation, bool& AbovePLayer, int32 BallonsAbovePlayer);

	void GenerateSpawnLocations(TArray<FSpawnLocData>& PointsArray, FVector StartSpawnLocation);
};



