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

	// Struct'lara referans alarak kodun geri kalanýný kýsaltýyoruz
	FLocations& Locs = MyLocations;
	FRotations& Rots = MyRotations;

	// Oyun baþladýðýndaki mevcut konum, hareketin baþlangýç noktasý olarak kaydediliyor
	Locs.StartLocation = GetActorLocation();

	// Hedef konum: Start'tan itibaren PlatformVelocity yönünde MoveDistance kadar ileride
	Locs.TargetLocation = Locs.StartLocation + (PlatformVelocity.GetSafeNormal() * MoveDistance);

	// Oyun baþladýðýndaki mevcut rotasyon (FRotator -> Euler FVector'e çevriliyor)
	Rots.StartRotation = GetActorRotation().Euler();

	// Hedef rotasyon: Start rotasyonuna RotationAmount kadar ekleniyor
	Rots.TargetRotation = Rots.StartRotation + RotationAmount;
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Her frame platformu hareket ettir ve döndür
	MovePlatform(DeltaTime);
}

void AMyActor::MovePlatform(float DeltaTime)
{
	FLocations& Locs = MyLocations;
	FRotations& Rots = MyRotations;

	// Bu frame'deki anlýk konum ve rotasyonu güncelle
	Locs.CurrentLocation = GetActorLocation();
	Rots.CurrentRotation = GetActorRotation().Euler();

	// Ping-Pong: bShouldReturn true ise Target'a, false ise Start'a doðru gidiliyor
	FVector LocationDestination = bShouldReturn ? Locs.TargetLocation : Locs.StartLocation;
	FVector RotationDestination = bShouldReturn ? Rots.TargetRotation : Rots.StartRotation;

	// Konumu sabit hýzda (InterpSpeed) hedefe doðru interpolate et
	// VInterpConstantTo hedefi asla aþmaz (overshoot olmaz), hedefe ulaþýnca orada sabit kalýr
	FVector NewLocation = FMath::VInterpConstantTo(Locs.CurrentLocation, LocationDestination, DeltaTime, InterpSpeed);
	SetActorLocation(NewLocation);

	// Rotasyonu (Euler formatýnda) sabit hýzda (RotationInterpSpeed) hedefe doðru interpolate et
	FVector NewRotationEuler = FMath::VInterpConstantTo(Rots.CurrentRotation, RotationDestination, DeltaTime, RotationInterpSpeed);

	// Euler FVector'ü tekrar FRotator'a çevirip aktöre uygula
	SetActorRotation(FRotator::MakeFromEuler(NewRotationEuler));

	// Konum hedefe ulaþtýysa (0.5 birim tolerans içinde) yönü tersine çevir
	if (NewLocation.Equals(LocationDestination, 0.1f))
	{
		bShouldReturn = !bShouldReturn;
	}
}