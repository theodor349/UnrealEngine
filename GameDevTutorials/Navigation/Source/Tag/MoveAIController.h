// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "MoveAIController.generated.h"

/**
 * 
 */

class ATargetPoint;

UCLASS()
class TAG_API AMoveAIController : public AAIController
{
	GENERATED_BODY()

public:
	void BeginPlay() override;
	void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;

private:
	FTimerHandle TimerHandle;
	
	UPROPERTY()
	TArray<AActor*> Waypoints;

	UFUNCTION()
	ATargetPoint* GetRandomWaypoint();
	UFUNCTION()
	void GoToRandomWaypoint();
};
