// Fill out your copyright notice in the Description page of Project Settings.


#include "TankAIController.h"


#include "Engine/TargetPoint.h"
#include "Kismet/GameplayStatics.h"
#include "Prototype1/Pawns/TankBase.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), Waypoints);

	GoToRandomWaypoint();
}

void ATankAIController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	GoToRandomWaypoint();
}

ATargetPoint* ATankAIController::GetRandomWaypoint()
{
	const auto Index = FMath::RandRange(0, Waypoints.Num() - 1);
	return Cast<ATargetPoint>(Waypoints[Index]);
}

void ATankAIController::GoToRandomWaypoint()
{
	MoveToActor(GetRandomWaypoint());
}
