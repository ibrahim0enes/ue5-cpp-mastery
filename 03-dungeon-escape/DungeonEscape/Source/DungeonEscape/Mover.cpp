// Fill out your copyright notice in the Description page of Project Settings.


#include "Mover.h"

// Sets default values for this component's properties
UMover::UMover()
{
	
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UMover::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetOwner()->GetActorLocation();
	
}


void UMover::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	MovePlatform(DeltaTime);
	RotatePlatform(DeltaTime);
	
}

void UMover::MovePlatform(float DeltaTime)
{
	if (!bShouldMove) return;	
	if (!GetOwner() || WayPoints.Num() == 0)
	{
		return;
	}

	FVector CurrentLocation = GetOwner()->GetActorLocation();
	FVector Dest = StartLocation + WayPoints[CurrentWaypointIndex];

	FVector NewLocation = FMath::VInterpConstantTo(CurrentLocation,Dest,DeltaTime,MoveSpeed);
	GetOwner()->SetActorLocation(NewLocation);

	if (NewLocation.Equals(Dest, 0.1f))
	{
		CurrentWaypointIndex++;
	}

	if (CurrentWaypointIndex == WayPoints.Num())
	{
		CurrentWaypointIndex = 0;
	}

}

void UMover::RotatePlatform(float DeltaTime)
{
	if (!bShouldMove) return;
	FRotator RotationToAdd = RDirection * DeltaTime;
	GetOwner()->AddActorLocalRotation(RotationToAdd);
}

