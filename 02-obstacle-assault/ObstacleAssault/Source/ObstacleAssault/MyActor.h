// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

// Platformun konum (Location) bilgilerini tutan struct
USTRUCT(BlueprintType)
struct FLocations
{
	GENERATED_BODY()

	// Platformun hareket baþlangýç noktasý (BeginPlay'de bir kere set edilir)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locations")
	FVector StartLocation;

	// Platformun her frame'deki anlýk konumu
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locations")
	FVector CurrentLocation;

	// Platformun gitmesi gereken hedef konum
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

	// Platformu her frame hareket ettiren ve döndüren ana fonksiyon
	void MovePlatform(float DeltaTime);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locations")
	FLocations MyLocations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locations")
	FVector Direction = FVector(0, 0, 0);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locations")
	float Distance = 100;

private:
	bool bShouldReturn = true;
};