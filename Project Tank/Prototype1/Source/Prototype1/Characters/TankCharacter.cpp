// Fill out your copyright notice in the Description page of Project Settings.


#include "TankCharacter.h"

#include "Prototype1/Pawns/EnemyBase.h"

// Sets default values
ATankCharacter::ATankCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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
void ATankCharacter::BeginPlay()
{
	Super::BeginPlay();
	if(!Target)
		UE_LOG(LogTemp, Warning, TEXT("%s has no Target set!"), *GetOwner()->GetName());
}

// Called every frame
void ATankCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if(Target)
		PointAt(Target->GetActorLocation(), DeltaTime);
}

// Called to bind functionality to input
void ATankCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void ATankCharacter::PointAt(FVector Position, float DeltaTime)
{
	SetTargetRotation();
	Rotate(DeltaTime);
}

void ATankCharacter::SetTargetRotation()
{
	if(!Target)
		return;

	SetTargetYawRotation();
	SetTargetRollRotation();
}

void ATankCharacter::SetTargetYawRotation()
{
	FVector CurrentLocation = TurretMesh->GetComponentLocation();
	FVector TargetLocation = Target->GetActorLocation();

	float YawRotation = FVector(TargetLocation - CurrentLocation).Rotation().Yaw;
	TargetRotation.Yaw = FMath::Fmod((YawRotation + TurretRotationOffset) + 360, 360);
}

void ATankCharacter::SetTargetRollRotation()
{
	FVector CurrentLocation = CannonMesh->GetComponentLocation();
	FVector TargetLocation = Target->GetActorLocation();
	
	float TargetDistance = FVector::Dist(CurrentLocation, TargetLocation);
	float TargetHeightDistance = TargetLocation.Z - CurrentLocation.Z;
	float RollRotation = FVector(TargetHeightDistance, TargetDistance, 0.f).ToOrientationRotator().Yaw;
	TargetRotation.Roll = FMath::Fmod((RollRotation + CannonRotationOffset) + 360, 360) - 180.f;
}

void ATankCharacter::Rotate(float DeltaTime)
{
	// UE_LOG(LogTemp, Warning, TEXT(" ---- "));
	RotateTurret(DeltaTime);
	RotateCannon(DeltaTime);
}

void ATankCharacter::RotateTurret(float DeltaTime)
{
	FRotator TurretRotation = TurretMesh->GetComponentRotation();
	float RotationDiff = TurretTurnDiff();
	float TurnTime = TurretTurnSpeed / FMath::Abs(RotationDiff);

	float RotationToTurn = FMath::FInterpTo(0.f, RotationDiff, DeltaTime, TurnTime);
	TurretRotation.Yaw += RotationToTurn;
	TurretRotation.Yaw = ClampTurretRortation(TurretRotation.Yaw);
	TurretMesh->SetWorldRotation(TurretRotation);
}

float ATankCharacter::TurretTurnDiff()
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

float ATankCharacter::ClampTurretRortation(float Rotation)
{
	Rotation += TurretRotationOffset;
	float BaseRotation = BaseMesh->GetForwardVector().Rotation().Yaw;
	if(TurretMaxYaw < 180 && TurretMinYaw > -180)
		Rotation = FMath::ClampAngle(Rotation, BaseRotation + TurretRotationOffset + TurretMinYaw, BaseRotation + TurretRotationOffset + TurretMaxYaw);
	
	return Rotation - TurretRotationOffset;
}

void ATankCharacter::RotateCannon(float DeltaTime)
{
	float TRotation = TargetRotation.Roll;
	// UE_LOG(LogTemp, Warning, TEXT("Target: %f"), TRotation);
	FRotator CurrentRotation = CannonMesh->GetComponentRotation();

	float TurnTime = CannonTurnSpeed / FMath::Abs(TRotation - CurrentRotation.Roll);
	float Rotation = FMath::FInterpTo(CurrentRotation.Roll, TRotation, DeltaTime, TurnTime);

	Rotation = ClampCannonRortation(Rotation);
	CurrentRotation.Roll = Rotation;
	CannonMesh->SetWorldRotation(CurrentRotation);
}

float ATankCharacter::ClampCannonRortation(float Rotation)
{
	Rotation += CannonRotationOffset - 90.f;
	float BaseRotation = BaseMesh->GetForwardVector().Rotation().Roll;

	if(CannonMaxRoll < 180 && CannonMinRoll > -180)
	{
		float Min = BaseRotation - CannonMaxRoll;
		float Max = BaseRotation - CannonMinRoll;
		Rotation = FMath::ClampAngle(Rotation, Min, Max);
	}

	return Rotation - CannonRotationOffset + 90.f;
}

