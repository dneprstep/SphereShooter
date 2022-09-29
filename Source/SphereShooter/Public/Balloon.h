// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Balloon.generated.h"

UCLASS()
class SPHERESHOOTER_API ABalloon : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABalloon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called on destruction
	void HandleDestruction();

	void SetMaterialColor(FLinearColor color);

	bool Alive() const;

	float getRadius() const;
	void setRadius(float radius);

	FLinearColor GetColor() const;
	void SetColor(FLinearColor val);

private:
	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	class UParticleSystem* particleDeath;

	UPROPERTY(EditAnywhere, Category = "Combat")
	class USoundBase* deathSound;

	UPROPERTY(VisibleDefaultsOnly, Category = "Components")
	class USphereComponent* CollisionComponent;
	
	UPROPERTY(EditAnywhere, Category = "Components")
	class UStaticMeshComponent* MeshComponent;

	UPROPERTY(VisibleAnywhere)
	bool isAlive;

	UPROPERTY(VisibleAnywhere)
	int32 Health;

	UPROPERTY(VisibleAnywhere)
	int32 MaxHealth = 100;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	float CollisionRadius = 50;

	UPROPERTY(EditAnywhere, Category = "Components")
	FLinearColor mColor;
};
