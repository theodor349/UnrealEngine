// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TankBase.generated.h"

class UBoxComponent;
class AEnemyBase;

UCLASS()
class PROTOTYPE1_API ATankBase : public APawn
{
	GENERATED_BODY()

private:
	// Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess="true"))
	UBoxComponent* CapsuleComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess="true"))
	UStaticMeshComponent* BaseMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess="true"))
	UStaticMeshComponent* TurretMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess="true"))
	UStaticMeshComponent* CannonMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess="true"))
	USceneComponent* ProjectileSpawnPoint;

	UPROPERTY(EditAnywhere, Category="Targeting")
	AEnemyBase* Target;

	UPROPERTY(EditAnywhere, Category="Targeting")
	float TurretTurnSpeed = 20.f;
	UPROPERTY(EditAnywhere, Category="Targeting")
	float TurretRotationOffset = -90.f;
	UPROPERTY(EditAnywhere, Category="Targeting")
	float TurretMaxYaw = 360.f;
	UPROPERTY(EditAnywhere, Category="Targeting")
	float TurretMinYaw = -360.f;
	
	UPROPERTY(EditAnywhere, Category="Targeting")
	float CannonTurnSpeed = 10.f;
	UPROPERTY(EditAnywhere, Category="Targeting")
	float CannonRotationOffset = -90.f;
	UPROPERTY(EditAnywhere, Category="Targeting")
	float CannonMaxRoll = 30.f;
	UPROPERTY(EditAnywhere, Category="Targeting")
	float CannonMinRoll = -10.f;
	
public:
	// Sets default values for this pawn's properties
	ATankBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	FRotator TargetRotation;
	
	void PointAt(FVector Position, float DeltaTime);
	
	void SetTargetRotation();
	void SetTargetYawRotation();
	void SetTargetRollRotation();
	void Rotate(float DeltaTime);
	void RotateTurret(float DeltaTime);
	float TurretTurnDiff();
	float ClampTurretRortation(float Rotation);
	void RotateCannon(float DeltaTime);
};
