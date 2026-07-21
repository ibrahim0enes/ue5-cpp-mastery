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

// Platformun rotasyon bilgilerini tutan struct
// Not: FRotator yerine FVector (Euler açýlarý: X=Roll, Y=Pitch, Z=Yaw) kullanýlýyor
USTRUCT(BlueprintType)
struct FRotations
{
	GENERATED_BODY()

	// Baþlangýç rotasyonu (Euler formatýnda)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotations")
	FVector StartRotation;

	// Anlýk rotasyon (Euler formatýnda)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotations")
	FVector CurrentRotation;

	// Hedef rotasyon (Euler formatýnda)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotations")
	FVector TargetRotation;
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

	// Konum (Start/Current/Target) verilerini tutan struct örneði
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locations")
	FLocations MyLocations;

	// Rotasyon (Start/Current/Target) verilerini tutan struct örneði
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locations")
	FRotations MyRotations;

	// Platformun konum deðiþim hýzý (cm/saniye) - VInterpConstantTo'nun Speed parametresi
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locations")
	float InterpSpeed = 100.0f;

	// Platformun rotasyon deðiþim hýzý (derece/saniye)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locations")
	float RotationInterpSpeed = 45.0f;

	// Platformun hangi yönde hareket edeceðini belirleyen vektör (yönü normalize edilerek kullanýlýr)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locations")
	FVector PlatformVelocity = FVector(0.0f, 100.0f, 0.0f);

	// Platformun Start ile Target arasýndaki toplam mesafesi
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locations")
	float MoveDistance = 300.f;

	// Platformun Start rotasyonuna eklenecek dönüþ miktarý (Euler: X=Roll, Y=Pitch, Z=Yaw)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Locations")
	FVector RotationAmount = FVector(0.f, 0.f, 90.f); // X=Roll, Y=Pitch, Z=Yaw

private:
	// Ping-Pong yön kontrolü: true ise Target'a, false ise Start'a doðru hareket ediliyor
	bool bShouldReturn = true;
};