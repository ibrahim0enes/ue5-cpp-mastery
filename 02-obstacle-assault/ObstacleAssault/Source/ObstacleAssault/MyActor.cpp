// Fill out your copyright notice in the Description page of Project Settings.

#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlatformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformMesh"));
	RootComponent = PlatformMesh;
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MovePlatform(DeltaTime);
	RotatePlatform(DeltaTime);
}

void AMyActor::MovePlatform(float DeltaTime)
{
	if (WayPoints.Num() == 0) return;

	FVector Destination = StartLocation + WayPoints[CurrentWaypointIndex];
	FVector CurrentLocation = GetActorLocation();

	FVector NewLocation = FMath::FInterpConstantTo(CurrentLocation, Destination , DeltaTime , MoveSpeed);
	SetActorLocation(NewLocation);
	

	if (GetActorLocation().Equals(NewLocation, 0.5f))
	{
		CurrentWaypointIndex++;
	}

	if (CurrentWaypointIndex == WayPoints.Num())
	{
		CurrentWaypointIndex = 0;
	}
}

void AMyActor::RotatePlatform(float DeltaTime)
{
	FRotator RotationToAdd = RDirection * DeltaTime;
	AddActorLocalRotation(RotationToAdd);
}