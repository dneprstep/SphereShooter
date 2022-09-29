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
	int32 SpawnBalloonsCount = 15;

	UPROPERTY(EditAnywhere, Category = "GameData")
	int32 WinBallonsCount = 10;

	UPROPERTY(EditAnywhere, Category = "GameData", meta = (ClampMin = "1", ClampMax = "100"))
	float BalloonRateCount = 10.f;

	UPROPERTY(EditAnywhere, Category = "GameData", meta = (ClampMin = "100", ClampMax = "5000"))
	float maxBalloonSpawnRadius = 2000.f;

	UPROPERTY(EditAnywhere, Category = "GameData", meta = (ClampMin = "100", ClampMax = "5000"))
	float minBalloonSpawnRadius = 1500.f;

	UPROPERTY(EditAnywhere, Category = "GameData", meta = (ClampMin = "1", ClampMax = "100"))
	float RateBalloonSpawnRadius = 5.f;

	UPROPERTY(EditAnywhere, Category = "GameData", meta = (ClampMin = "0", ClampMax = "1000"))
	float DistanceBetweenBalloons = 80.f;

	UPROPERTY(EditAnywhere, Category = "GameData", meta = (ClampMin = "10", ClampMax = "100"))
	float BalloonRadius = 50.f;

	UPROPERTY(EditAnywhere, Category = "GameData")
	int32 MaxSpawnTries = 100;

	UPROPERTY(VisibleAnywhere, Category = "GameData")
	int32 Rounds = 0;
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

	void GenerateSpawnLocations(TArray<FSpawnLocData>& PointsArray, FVector StartSpawnLocation);
};



