// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorOpener.h"
#include "GameFramework/Actor.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"

// Sets default values for this component's properties
UDoorOpener::UDoorOpener()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
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

	if(PressurePlate && PressurePlate->IsOverlappingActor(ActorThatOpens))
		OpenDoor(DeltaTime);
}

void UDoorOpener::OpenDoor(float DeltaTime) const
{
	FRotator Rotation = GetOwner()->GetActorRotation();
	Rotation.Yaw = FMath::FInterpTo(Rotation.Yaw, GetTargetYaw(), DeltaTime, 2.f);
	GetOwner()->SetActorRotation(Rotation);
}

