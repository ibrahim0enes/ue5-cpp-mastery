// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

USTRUCT(BlueprintType)
struct FLocations
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locations")
	FVector StartLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locations")
	FVector CurrentLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locations")
	FVector TargetLocation;
};

UCLASS()
class OBSTACLEASSAULT_API AMyActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void StartMove();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locations")
	FLocations MyLocations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locations")
	FVector NewLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locations")
	float InterpSpeed = 1.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Locations")
	bool bIsMoving = true;


};
