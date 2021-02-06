// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/AudioComponent.h"
#include "Engine/TriggerVolume.h"


#include "DoorOpener.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UDoorOpener : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDoorOpener();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
private:
	void OpenDoor(float DeltaTime);
	void CloseDoor(float DeltaTime);
	
	UPROPERTY(EditAnywhere)
	ATriggerVolume* PressurePlate = nullptr;
	UPROPERTY()
	UAudioComponent* AudioComponent = nullptr;

	UPROPERTY(EditAnywhere)
	float OpenAngle = 90.f;
	UPROPERTY(EditAnywhere)
	float ClosedAngle = 0.f;
	UPROPERTY(EditAnywhere)
	float OpenSpeed = .8f;
	UPROPERTY(EditAnywhere)
	float CloseSpeed = 2.f;
	UPROPERTY(EditAnywhere)
	float CloseDelay = 1.f;
	UPROPERTY(EditAnywhere)
	float NeededMass = 60.f;

	bool LastSoundWasOpen = false;
	
	float LastOpened = 0;
	float StartYaw;
	float GetOpenYaw() const { return StartYaw + OpenAngle; };
	float GetClosedYaw() const { return StartYaw + ClosedAngle; };
	
	float TotalMassOfActors() const;
	void CheckForPressurePlate();
	void FindAudioComponent();
};
