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
	CollisionComponent->InitSphereRadius(CollisionRadius);
	RootComponent = CollisionComponent;

	// Add mesh component
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	MeshComponent->SetupAttachment(CollisionComponent);
}

// Called when the game starts or when spawned
void ABalloon::BeginPlay()
{
	Super::BeginPlay();

	CollisionComponent->SetSphereRadius(getRadius());
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

float ABalloon::getRadius() const
{ 
	return CollisionRadius;
}

void ABalloon::setRadius(float radius)
{ 
	CollisionRadius = radius;
}

FLinearColor ABalloon::GetColor() const
{ 
	return mColor; 
}

void ABalloon::SetColor(FLinearColor val)
{ 
	mColor = val; 
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


