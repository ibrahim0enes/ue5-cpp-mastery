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
	MyLocations.StartLocation = GetActorLocation();
	// Direction varsay�lan olarak normalize edilerek y�n vekt�r� elde edilir
	MyLocations.TargetLocation = MyLocations.StartLocation + (Direction.GetSafeNormal() * Distance);
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MovePlatform(DeltaTime);


}

void AMyActor::MovePlatform(float DeltaTime)
{
	MyLocations.CurrentLocation = GetActorLocation();

	FVector Destination = bShouldReturn ? MyLocations.StartLocation : MyLocations.TargetLocation;

	// MoveSpeed ile g�ncellendi
	FVector NewLocation = FMath::VInterpConstantTo(MyLocations.CurrentLocation, Destination, DeltaTime, MoveSpeed);	
	SetActorLocation(NewLocation);

	if (MyLocations.CurrentLocation.Equals(Destination, 1.0f))
	{
		bShouldReturn = !bShouldReturn;
	}
}

