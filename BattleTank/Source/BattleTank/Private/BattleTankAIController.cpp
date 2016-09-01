// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "BattleTankAIController.h"

void ABattleTankAIController::BeginPlay() 
{
	Super::BeginPlay();

	ATank* tempTank = GetControlledTank();
	ATank* playerTankPawn = GetPlayerTank();

	if (playerTankPawn)
	{
		UE_LOG(LogTemp, Warning, TEXT("%s"), *playerTankPawn->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Error to get player tank"));
	}
}

ATank* ABattleTankAIController::GetControlledTank()
{
	return Cast<ATank>(GetPawn());
}

ATank* ABattleTankAIController::GetPlayerTank()
{
	ATank* playerTankPawn = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	return playerTankPawn;
}