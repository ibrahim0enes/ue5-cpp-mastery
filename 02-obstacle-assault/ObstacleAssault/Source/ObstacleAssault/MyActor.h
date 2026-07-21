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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locations")
	FLocations MyLocations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	FVector Direction = FVector(1, 0, 0); // Varsayýlan olarak X ekseninde hareket

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float Distance = 500.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float MoveSpeed = 200.0f; // Saniyede 200 cm

private:
	bool bShouldReturn = false; // Baþlangýçta hedefe doðru gitsin

};
