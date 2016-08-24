// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "AIController.h"
#include "BattleTankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ABattleTankAIController : public AAIController
{
	GENERATED_BODY()


public:

		virtual void BeginPlay() override;
	
		ATank* GetControlledTank();

		ATank* GetPlayerTank();
};
