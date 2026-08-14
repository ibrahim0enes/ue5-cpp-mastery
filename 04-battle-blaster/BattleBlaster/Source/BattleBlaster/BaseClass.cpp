// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseClass.h"

// Sets default values
ABaseClass::ABaseClass()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
	SetRootComponent(CapsuleComp);

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
	BaseMesh->SetupAttachment(CapsuleComp);

	TurrentMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurrentMesh"));
	TurrentMesh->SetupAttachment(BaseMesh);
}

void ABaseClass::RotateTurret(FVector LookAtTarget)
{
	FVector VectorToTarget =
		LookAtTarget - TurrentMesh->GetComponentLocation();

	FRotator LookAtRotation =
		FRotator(0.0f, VectorToTarget.Rotation().Yaw, 0.0f);

	FRotator InterpolatedRotation = FMath::RInterpTo(
		TurrentMesh->GetComponentRotation(),
		LookAtRotation,
		GetWorld()->GetDeltaSeconds(),
		10.f
	);

	TurrentMesh->SetWorldRotation(InterpolatedRotation);
}

