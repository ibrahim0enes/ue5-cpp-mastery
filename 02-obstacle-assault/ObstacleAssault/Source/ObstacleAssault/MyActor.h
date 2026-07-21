// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* PlatformMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	
	TArray<FVector> WayPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float MoveSpeed = 200.0f; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	FRotator RDirection = FRotator(0, 1, 0); 

private:
	FVector StartLocation = FVector::ZeroVector;
	int32 CurrentWaypointIndex = 0;
};