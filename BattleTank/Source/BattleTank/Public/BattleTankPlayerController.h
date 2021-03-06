// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "BattleTankPlayerController.generated.h" // Must be the last include

/**
 * 
 */
UCLASS()
class BATTLETANK_API ABattleTankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:

	ATank* GetControlledTank() const;
	
	virtual void BeginPlay() override;

	virtual void Tick(float deltraTime) override;

private: 
	// Start the tank moving the barrel so that a shot would it ther
	// the crosshair intersects the world
	void AimTowardCrosshair();

	// Return an out parameter, true if it landscape
	const bool GetSightRayHitLocation(FVector& hitLocation);
};