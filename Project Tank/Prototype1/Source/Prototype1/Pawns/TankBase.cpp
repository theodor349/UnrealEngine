// Fill out your copyright notice in the Description page of Project Settings.


// ReSharper disable CppLocalVariableMayBeConst
#include "TankBase.h"
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
	
	// PointTurretAt(Position, DeltaTime);
	// PointCannonAt(Position, DeltaTime);
}

void ATankBase::PointTurretAt(FVector Position, float DeltaTime)
{
	FVector CurrentLocation = TurretMesh->GetComponentLocation();
	FVector TargetLocation(Position.X, Position.Y, CurrentLocation.Z);
	
	FRotator CurrentRotation = TurretMesh->GetComponentRotation();
	float TRotation = FVector(TargetLocation - CurrentLocation).Rotation().Yaw;
	TRotation = FMath::Fmod(TRotation + 360, 360);

	UE_LOG(LogTemp, Warning, TEXT("----"), TRotation);
	UE_LOG(LogTemp, Warning, TEXT("Target: %f"), TRotation);
	UE_LOG(LogTemp, Warning, TEXT("Current: %s"), *CurrentRotation.ToString());
	
	TRotation = FMath::Clamp(TRotation + TurretRotationOffset, TurretMinYaw, TurretMaxYaw);
	
	float TurnTime = TurretTurnSpeed / FMath::Abs(TRotation - CurrentRotation.Yaw);
	
	CurrentRotation.Yaw = FMath::FInterpTo(CurrentRotation.Yaw, TRotation, DeltaTime, TurnTime);
	TurretMesh->SetWorldRotation(CurrentRotation);
}

void ATankBase::PointCannonAt(FVector Position, float DeltaTime)
{
	FVector CurrentLocation = CannonMesh->GetComponentLocation();
	FVector TargetLocation(Position.X, Position.Y, CurrentLocation.Z);

	float TargetDistance = FVector::Dist(CurrentLocation, TargetLocation);
	float TargetHeightDistance = Position.Z - CurrentLocation.Z;

	float TRotation = FVector(TargetHeightDistance, TargetDistance, 0.f).ToOrientationRotator().Yaw;
	TRotation = FMath::Clamp(TRotation + CannonRotationOffset, -CannonMaxRoll, -CannonMinRoll);

	FRotator CurrentRotation = CannonMesh->GetComponentRotation();
	float TurnTime = CannonTurnSpeed / FMath::Abs(TRotation - CurrentRotation.Roll);
	CurrentRotation.Roll = FMath::FInterpTo(CurrentRotation.Roll, TRotation, DeltaTime, TurnTime);
	
	CannonMesh->SetWorldRotation(CurrentRotation);
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
	TargetRotation.Z = FMath::Fmod((YawRotation + TurretRotationOffset) + 360, 360) - 180.f;
}

void ATankBase::SetTargetRollRotation()
{
	FVector CurrentLocation = TurretMesh->GetComponentLocation();
	FVector TargetLocation = Target->GetActorLocation();
	
	float TargetDistance = FVector::Dist(CurrentLocation, TargetLocation);
	float TargetHeightDistance = TargetLocation.Z - CurrentLocation.Z;
	float RollRotation = FVector(TargetHeightDistance, TargetDistance, 0.f).ToOrientationRotator().Yaw;
	TargetRotation.X = FMath::Fmod((RollRotation + CannonRotationOffset) + 360, 360) - 180.f;

}

void ATankBase::Rotate(float DeltaTime)
{
	UE_LOG(LogTemp, Warning, TEXT("----"));
	UE_LOG(LogTemp, Warning, TEXT("Target: %s"), *TargetRotation.ToString());
	
	RotateTurret(DeltaTime);
	RotateCannon(DeltaTime);
}

void ATankBase::RotateTurret(float DeltaTime)
{
	float TRotation = TargetRotation.Z;
	FRotator CurrentRotation = TurretMesh->GetComponentRotation();

	float TurnTime = TurretTurnSpeed / FMath::Abs(TRotation - CurrentRotation.Yaw);
	CurrentRotation.Yaw = FMath::FInterpTo(CurrentRotation.Yaw, TRotation, DeltaTime, TurnTime);
	TurretMesh->SetWorldRotation(CurrentRotation);
}

void ATankBase::RotateCannon(float DeltaTime)
{
	float TRotation = TargetRotation.X;
	FRotator CurrentRotation = CannonMesh->GetComponentRotation();
	UE_LOG(LogTemp, Warning, TEXT("Current: %s"), *CurrentRotation.ToString());

	float TurnTime = CannonTurnSpeed / FMath::Abs(TRotation - CurrentRotation.Roll);
	CurrentRotation.Roll = FMath::FInterpTo(CurrentRotation.Roll, TRotation, DeltaTime, TurnTime);
	CannonMesh->SetWorldRotation(CurrentRotation);

}

