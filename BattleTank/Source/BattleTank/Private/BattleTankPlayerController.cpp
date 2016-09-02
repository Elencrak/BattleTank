// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "BattleTankPlayerController.h"


// Called when the game starts or when spawned
void ABattleTankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	ATank* ControlledTank = GetControlledTank();
	if (ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("%s"), *ControlledTank->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No tanks possessing"));
	}
}

void ABattleTankPlayerController::Tick(float deltaTime) 
{
	Super::Tick(deltaTime);
	AimTowardCrosshair();
}

ATank* ABattleTankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

void ABattleTankPlayerController::AimTowardCrosshair() 
{
	if (!GetControlledTank()) { return; }

	FVector hitLocation; // Our out parameter
	if (GetSightRayHitLocation(hitLocation)) 
	{
		UE_LOG(LogTemp, Warning, TEXT("%s"), *hitLocation.ToString());
		// Get World location if linetrace through crosshair
		// if it this landscapre
			// Tell controlled tank to aim at this point
	}

}

bool ABattleTankPlayerController::GetSightRayHitLocation(FVector& hitLocation) const
{
	hitLocation = FVector(1.0);
	return true;
}