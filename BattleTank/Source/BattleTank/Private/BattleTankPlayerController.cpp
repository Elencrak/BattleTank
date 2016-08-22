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

ATank* ABattleTankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}