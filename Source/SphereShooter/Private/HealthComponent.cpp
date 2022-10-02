// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"
#include "Kismet/GameplayStatics.h"
#include "../SphereShooterGameMode.h"
#include "ShooterPlayerController.h"
#include "Balloon.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();
	Health = MaxHealth;

	//register callback function on OnTakeAnyDamage event
	GetOwner()->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::DamageTaken);

	GameMode = Cast<ASphereShooterGameMode>(UGameplayStatics::GetGameMode(this));
}

// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UHealthComponent::DamageTaken(AActor* DamagedActor, float Damage, const UDamageType* DamageType, class AController* Instigator, AActor* DamageCauser)
{
	if (Damage <= 0.f) return;

	Health -= Damage;

	if (Health <= 0)
	{
		if (nullptr != GameMode && nullptr != DamagedActor) {
			ABalloon* BalloonDestroyed = Cast<ABalloon>(DamagedActor);
			if (nullptr != BalloonDestroyed)
			{
				AShooterPlayerController* PlayerCharacter = Cast<AShooterPlayerController>(Instigator);
				PlayerCharacter->BalloonHit();
			}
			GameMode->ActorDied(DamagedActor);
		}
	}
}
