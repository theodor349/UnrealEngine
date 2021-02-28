// Fill out your copyright notice in the Description page of Project Settings.


// ReSharper disable CppLocalVariableMayBeConst
#include "TankBase.h"

#include <string>

#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Prototype1/Pawns/EnemyBase.h"
// Sets default values
ATankBase::ATankBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CapsuleComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Capsule Component"));
	RootComponent = CapsuleComp;

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Mesh"));
	BaseMesh->SetupAttachment(RootComponent);

	TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Turret Mesh"));
	TurretMesh->SetupAttachment(BaseMesh);

	CannonMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cannon Mesh"));
	CannonMesh->SetupAttachment(TurretMesh);

	ProjectileSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Projectile Spawn Point"));
	ProjectileSpawnPoint->SetupAttachment(CannonMesh);
}

// Called when the game starts or when spawned
void ATankBase::BeginPlay()
{
	Super::BeginPlay();
	
	if(!Target)
		UE_LOG(LogTemp, Warning, TEXT("%s has no Target set!"), *GetOwner()->GetName());
}

// Called every frame
void ATankBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(Target)
		PointAt(Target->GetActorLocation(), DeltaTime);
}

// Called to bind functionality to input
void ATankBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}


void ATankBase::PointAt(FVector Position, float DeltaTime)
{
	SetTargetRotation();
	Rotate(DeltaTime);
}

void ATankBase::SetTargetRotation()
{
	if(!Target)
		return;

	SetTargetYawRotation();
	SetTargetRollRotation();
}

void ATankBase::SetTargetYawRotation()
{
	FVector CurrentLocation = TurretMesh->GetComponentLocation();
	FVector TargetLocation = Target->GetActorLocation();

	float YawRotation = FVector(TargetLocation - CurrentLocation).Rotation().Yaw;
	TargetRotation.Yaw = FMath::Fmod((YawRotation + TurretRotationOffset) + 360, 360);
}

void ATankBase::SetTargetRollRotation()
{
	FVector CurrentLocation = CannonMesh->GetComponentLocation();
	FVector TargetLocation = Target->GetActorLocation();
	
	float TargetDistance = FVector::Dist(CurrentLocation, TargetLocation);
	float TargetHeightDistance = TargetLocation.Z - CurrentLocation.Z;
	float RollRotation = FVector(TargetHeightDistance, TargetDistance, 0.f).ToOrientationRotator().Yaw;
	TargetRotation.Roll = FMath::Fmod((RollRotation + CannonRotationOffset) + 360, 360) - 180.f;
}

void ATankBase::Rotate(float DeltaTime)
{
	UE_LOG(LogTemp, Warning, TEXT("----"));
	RotateTurret(DeltaTime);
	RotateCannon(DeltaTime);
}

void ATankBase::RotateTurret(float DeltaTime)
{
	FRotator TurretRotation = TurretMesh->GetComponentRotation();
	float RotationDiff = TurretTurnDiff();
	float TurnTime = TurretTurnSpeed / FMath::Abs(RotationDiff);

	float RotationToTurn = FMath::FInterpTo(0.f, RotationDiff, DeltaTime, TurnTime);
	TurretRotation.Yaw += RotationToTurn;
	UE_LOG(LogTemp, Warning, TEXT("Before: %s"), *TurretRotation.ToString());
	TurretRotation.Yaw = ClampTurretRortation(TurretRotation.Yaw);
	UE_LOG(LogTemp, Warning, TEXT("After: %s"), *TurretRotation.ToString());
	TurretMesh->SetWorldRotation(TurretRotation);
}

float ATankBase::TurretTurnDiff()
{
	FRotator CurrentRotation = TurretMesh->GetComponentRotation();
	float T = TargetRotation.Yaw;
	float P = CurrentRotation.Yaw;
	if(P < T)
	{
		if(T - P < 180)
			return T - P; // Right
		else 
			return -(P + 360 - T); // Left
	}
	else
	{
		if(P - T > 180)
			return T + 360 - P; // Right
		else 
			return -(P - T); // Left
	}
}

float ATankBase::ClampTurretRortation(float Rotation)
{
	Rotation += TurretRotationOffset;
	float BaseRotation = BaseMesh->GetForwardVector().Rotation().Yaw;
	if(TurretMaxYaw < 180 && TurretMinYaw > -180)
		Rotation = FMath::ClampAngle(Rotation, BaseRotation + TurretRotationOffset + TurretMinYaw, BaseRotation + TurretRotationOffset + TurretMaxYaw);
	
	return Rotation - TurretRotationOffset;
}

void ATankBase::RotateCannon(float DeltaTime)
{
	float TRotation = TargetRotation.Roll;
	FRotator CurrentRotation = CannonMesh->GetComponentRotation();

	float TurnTime = CannonTurnSpeed / FMath::Abs(TRotation - CurrentRotation.Roll);
	CurrentRotation.Roll = FMath::FInterpTo(CurrentRotation.Roll, TRotation, DeltaTime, TurnTime);
	CannonMesh->SetWorldRotation(CurrentRotation);

}

