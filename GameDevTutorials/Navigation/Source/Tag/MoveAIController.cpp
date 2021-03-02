// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveAIController.h"


#include "Engine/TargetPoint.h"
#include "Kismet/GameplayStatics.h"

void AMoveAIController::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), Waypoints);
	GoToRandomWaypoint();
}

void AMoveAIController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	GetWorldTimerManager().SetTimer(TimerHandle, this, &AMoveAIController::GoToRandomWaypoint, 1.f, false);
}

ATargetPoint* AMoveAIController::GetRandomWaypoint()
{
	const auto Index = FMath::RandRange(0, Waypoints.Num() - 1);
	return Cast<ATargetPoint>(Waypoints[Index]);
}

void AMoveAIController::GoToRandomWaypoint()
{
	MoveToActor(GetRandomWaypoint());
}
