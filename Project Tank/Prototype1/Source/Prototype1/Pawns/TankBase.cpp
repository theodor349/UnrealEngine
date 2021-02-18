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
}

void ATankBase::PointTurretAt(FVector Position, float DeltaTime)
{
	FVector CurrentLocation = TurretMesh->GetComponentLocation();
	FVector TargetLocation(Position.X, Position.Y, CurrentLocation.Z);

	FRotator CurrentRotation = TurretMesh->GetComponentRotation();
	FRotator TargetRotation = FVector(TargetLocation - CurrentLocation).Rotation();
	TargetRotation.Yaw = FMath::Clamp(TargetRotation.Yaw - 90.f, -180.f, 180.f);
	UE_LOG(LogTemp, Warning, TEXT("Target rotation: %s"), *TargetRotation.ToString());
	UE_LOG(LogTemp, Warning, TEXT("Current rotation: %s"), *CurrentRotation.ToString());

	float TurnTime = TurnSpeed / FMath::Abs(TargetRotation.Yaw - CurrentRotation.Yaw);
	
	CurrentRotation.Yaw = FMath::FInterpTo(CurrentRotation.Yaw, TargetRotation.Yaw, DeltaTime, TurnTime);
	TurretMesh->SetWorldRotation(CurrentRotation);
}

