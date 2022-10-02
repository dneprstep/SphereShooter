// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterPlayerController.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "../SphereShooterCharacter.h"

AShooterPlayerController::AShooterPlayerController():BallonsHitCount(0)
{ }
void AShooterPlayerController::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	UUserWidget* HUDScreen = CreateWidget(this, HUDClass);
	if (nullptr != HUDScreen) {
		HUDScreen->AddToViewport();
	}
}

void AShooterPlayerController::BalloonHit()
{
	BallonsHitCount++;
}
int32 AShooterPlayerController::GetHitBalloon() const
{
	return BallonsHitCount;
}
