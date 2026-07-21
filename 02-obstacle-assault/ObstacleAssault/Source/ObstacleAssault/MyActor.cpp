// Fill out your copyright notice in the Description page of Project Settings.

#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
	// Bu aktör her frame Tick() çaðýrsýn (performans için ihtiyaç yoksa kapatýlabilir)
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	FLocations& Locs = MyLocations;

	Locs.StartLocation = GetActorLocation();
	Locs.TargetLocation = Locs.StartLocation + (Direction * Distance);

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


	FVector Destination = bShouldReturn ? Locs.StartLocation : Locs.TargetLocation;

	FVector NewLocation = FMath::FInterpConstantTo(Locs.CurrentLocation,Destination,DeltaTime,1);
	SetActorLocation(NewLocation);

	if (Locs.CurrentLocation.Equals(Destination, 0.1f))
	{
		bShouldReturn = !bShouldReturn;
	}
	
}