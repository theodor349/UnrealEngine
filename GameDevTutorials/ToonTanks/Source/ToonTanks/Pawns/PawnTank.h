// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PawnBase.h"

#include "PawnTank.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS()
class TOONTANKS_API APawnTank : public APawnBase
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Movement", meta = (AllowPrivateAccess="true"))
	USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Movement", meta = (AllowPrivateAccess="true"))
	UCameraComponent* Camera;

	UPROPERTY(VisibleInstanceOnly, Category="Movement")
	FVector MoveDirection;
	UPROPERTY(VisibleInstanceOnly, Category="Movement")
	FQuat RotationDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement", meta = (AllowPrivateAccess="true"))
	float MoveSpeed = 100.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement", meta = (AllowPrivateAccess="true"))
	float RotationSpeed = 100.f;

	bool bIsPlayerAlive = true;
	
	APlayerController* PlayerControllerRef;
	
	void CalculateMoveInput(float Value);
	void CalculateRotateInput(float Value);

	void Move();
	void Rotate();
	
public:
	// Sets default values for this pawn's properties
	APawnTank();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void HandleDestruction() override;

	bool GetIsPlayerAlive() const {return bIsPlayerAlive;}

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
