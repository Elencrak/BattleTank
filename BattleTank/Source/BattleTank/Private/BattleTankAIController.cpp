// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "BattleTankAIController.h"

void ABattleTankAIController::BeginPlay() 
{
	Super::BeginPlay();

	ATank* tempTank = GetControlledTank();

	if (tempTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("I'm %s"), *tempTank->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Error"));
	}

	
}

ATank* ABattleTankAIController::GetControlledTank()
{
	return Cast<ATank>(GetPawn());
}
