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
	FVector StartLocation = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locations")
	FVector CurrentLocation = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locations")
	FVector TargetLocation = FVector::ZeroVector;
};

USTRUCT(BlueprintType)
struct FRotations
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotations")
	FRotator StartRotation = FRotator::ZeroRotator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotations")
	FRotator CurrentRotation = FRotator::ZeroRotator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotations")
	FRotator TargetRotation = FRotator::ZeroRotator;
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

	void MovePlatform(float DeltaTime);
	void RotatePlatform(float DeltaTime);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locations")
	FLocations MyLocations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotations")
	FRotations MyRotations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	FVector LDirection = FVector(1, 0, 0); // Varsayilan olarak X ekseninde hareket

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	FRotator RDirection = FRotator(0, 1, 0); // Varsayilan olarak Yaw ekseninde (dikey eksen) donus

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float Distance = 500.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float MoveSpeed = 200.0f; // Saniyede 200 cm

private:
	bool bShouldReturn = false; // Baslangicta hedefe dogru gitsin
};