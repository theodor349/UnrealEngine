// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorOpener.h"
#include "Components/PrimitiveComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"

#define OUT

// Sets default values for this component's properties
UDoorOpener::UDoorOpener()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UDoorOpener::BeginPlay()
{
	Super::BeginPlay();
	StartYaw = GetOwner()->GetActorRotation().Yaw;

	if(!PressurePlate)
		UE_LOG(LogTemp, Error, TEXT("%s does have the DoorOpener component attached but no PressurePlate set."), *GetOwner()->GetName());
	ActorThatOpens = GetWorld()->GetFirstPlayerController()->GetPawn();
}

// Called every frame
void UDoorOpener::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	const float Time = GetWorld()->TimeSeconds;
	if(TotalMassOfActors() >= NeededMass)
	{
		OpenDoor(DeltaTime);
		LastOpened = Time;
	}
	else if(LastOpened + CloseDelay < Time)
	{
		CloseDoor(DeltaTime);
	}
}

void UDoorOpener::OpenDoor(float DeltaTime) const
{
	FRotator Rotation = GetOwner()->GetActorRotation();
	Rotation.Yaw = FMath::FInterpTo(Rotation.Yaw, GetOpenYaw(), DeltaTime, OpenSpeed);
	GetOwner()->SetActorRotation(Rotation);
}

void UDoorOpener::CloseDoor(float DeltaTime) const
{
	FRotator Rotation = GetOwner()->GetActorRotation();
	Rotation.Yaw = FMath::FInterpTo(Rotation.Yaw, GetClosedYaw(), DeltaTime, CloseSpeed);
	GetOwner()->SetActorRotation(Rotation);
}

float UDoorOpener::TotalMassOfActors() const
{
	float Mass = 0;
	TArray<AActor*> OverlappingActors;
	PressurePlate->GetOverlappingActors(OUT OverlappingActors);
	for(AActor* Actor : OverlappingActors)
	{
		Mass += Actor->FindComponentByClass<UPrimitiveComponent>()->GetMass();
	}
	return Mass;
}

