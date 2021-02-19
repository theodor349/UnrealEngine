// Fill out your copyright notice in the Description page of Project Settings.


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
	PointTurretAt(Position, DeltaTime);
	PointCannonAt(Position, DeltaTime);
}

void ATankBase::PointTurretAt(FVector Position, float DeltaTime)
{
	FVector CurrentLocation = TurretMesh->GetComponentLocation();
	FVector TargetLocation(Position.X, Position.Y, CurrentLocation.Z);
	
	FRotator CurrentRotation = TurretMesh->GetComponentRotation();
	float TargetRotation = FVector(TargetLocation - CurrentLocation).Rotation().Yaw;
	
	TargetRotation = FMath::Clamp(TargetRotation + TurretRotationOffset, TurretMinYaw, TurretMaxYaw);

	float TurnTime = TurretTurnSpeed / FMath::Abs(TargetRotation - CurrentRotation.Yaw);
	
	CurrentRotation.Yaw = FMath::FInterpTo(CurrentRotation.Yaw, TargetRotation, DeltaTime, TurnTime);
	TurretMesh->SetWorldRotation(CurrentRotation);
}

void ATankBase::PointCannonAt(FVector Position, float DeltaTime)
{
	FVector CurrentLocation = CannonMesh->GetComponentLocation();
	FVector TargetLocation(Position.X, Position.Y, CurrentLocation.Z);

	float TargetDistance = FVector::Dist(CurrentLocation, TargetLocation);
	float TargetHeightDistance = Position.Z - CurrentLocation.Z;

	float TargetRotation = FVector(TargetHeightDistance, TargetDistance, 0.f).ToOrientationRotator().Yaw;
	TargetRotation = FMath::Clamp(TargetRotation + CannonRotationOffset, -CannonMaxRoll, -CannonMinRoll);

	FRotator CurrentRotation = CannonMesh->GetComponentRotation();
	float TurnTime = CannonTurnSpeed / FMath::Abs(TargetRotation - CurrentRotation.Roll);
	CurrentRotation.Roll = FMath::FInterpTo(CurrentRotation.Roll, TargetRotation, DeltaTime, TurnTime);

	UE_LOG(LogTemp, Warning, TEXT("----"), TargetRotation);
	UE_LOG(LogTemp, Warning, TEXT("Target: %f"), TargetRotation);
	UE_LOG(LogTemp, Warning, TEXT("Current: %s"), *CurrentRotation.ToString());
	
	CannonMesh->SetWorldRotation(CurrentRotation);
}

