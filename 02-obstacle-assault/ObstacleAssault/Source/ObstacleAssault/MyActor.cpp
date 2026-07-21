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
	Locs.TargetLocation = FVector(1000.0f, 500.0f, 200.0f);
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	FLocations& Locs = MyLocations;
	Super::Tick(DeltaTime);

	if (bIsMoving)
	{
		Locs.CurrentLocation = GetActorLocation();
		NewLocation = FMath::VInterpTo(Locs.CurrentLocation, Locs.TargetLocation, DeltaTime, InterpSpeed);
		SetActorLocation(NewLocation);
	}

}

void AMyActor::StartMove()
{
	bIsMoving = true;
}

