// Fill out your copyright notice in the Description page of Project Settings.


#include "Balloon.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Materials/MaterialInstanceDynamic.h"

// Sets default values
ABalloon::ABalloon() : isAlive(true), Health(MaxHealth)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Add collision component
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	CollisionComponent->InitSphereRadius(CollisionRadiusPercent);
	RootComponent = CollisionComponent;

	// Add mesh component
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	MeshComponent->SetupAttachment(CollisionComponent);
}

// Called when the game starts or when spawned
void ABalloon::BeginPlay()
{
	Super::BeginPlay();

	// set balloon scale size in percent of normal
	CollisionComponent->SetRelativeScale3D(FVector3d(1.f, 1.f, 1.f)*GetPercentRadius()/100);
	SetMaterialColor(GetColor());
}

void ABalloon::SetMaterialColor(FLinearColor color)
{
	UMaterialInstanceDynamic* Material = MeshComponent->CreateAndSetMaterialInstanceDynamic(0);
	if (nullptr != Material)
	{
		Material->SetVectorParameterValue("Color", color);
	}
}
// Called every frame
void ABalloon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
bool ABalloon::Alive() const
{
	return isAlive;
}

float ABalloon::GetPercentRadius() const
{ 
	return CollisionRadiusPercent;
}

void ABalloon::SetPercentRadius(float radius)
{ 
	CollisionRadiusPercent = radius;
}

FLinearColor ABalloon::GetColor() const
{ 
	return mColor; 
}

void ABalloon::SetColor(FLinearColor val)
{ 
	mColor = val; 
}

float ABalloon::GetRadius() const
{
	return CollisionComponent->GetScaledSphereRadius();
}

void ABalloon::HandleDestruction()
{
	if (deathSound) {
		UGameplayStatics::PlaySoundAtLocation(this, deathSound, GetActorLocation());
	}

	if (particleDeath) {
		UGameplayStatics::SpawnEmitterAtLocation(this, particleDeath, GetActorLocation(), GetActorRotation());
	}

	isAlive = false;

	Destroy();
}


