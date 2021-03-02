// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */

class ATargetPoint;

UCLASS()
class PROTOTYPE1_API ATankAIController : public AAIController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	virtual void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;

private:
	UPROPERTY(EditAnywhere)
	TArray<AActor*> Waypoints;

	UFUNCTION()
	ATargetPoint* GetRandomWaypoint();
	UFUNCTION()
	void GoToRandomWaypoint();
};
