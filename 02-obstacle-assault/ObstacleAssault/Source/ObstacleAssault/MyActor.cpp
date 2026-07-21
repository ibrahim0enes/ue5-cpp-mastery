// Fill out your copyright notice in the Description page of Project Settings.

#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	FLocations& Locs = MyLocations;

	Locs.StartLocation = GetActorLocation();
	Locs.TargetLocation = Locs.StartLocation + (PlatformVelocity.GetSafeNormal() * MoveDistance);
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MovePlatform(DeltaTime);
}

void AMyActor::MovePlatform(float DeltaTime)
{
	FLocations& Locs = MyLocations;
	Locs.CurrentLocation = GetActorLocation();

	FVector Destination = bShouldReturn ? Locs.TargetLocation : Locs.StartLocation; // Ping-Pong Eðer True ise TargetLoc Destion oluyor eðer False ise StartLoc Destion oluyor

	FVector NewLocation = FMath::VInterpConstantTo(Locs.CurrentLocation, Destination, DeltaTime, InterpSpeed);
	SetActorLocation(NewLocation);

	if (NewLocation.Equals(Destination, 0.5f))
	{
		bShouldReturn = !bShouldReturn;
	}
}