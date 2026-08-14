// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"

#include "BaseClass.generated.h"

UCLASS()
class BATTLEBLASTER_API ABaseClass : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABaseClass();



	UPROPERTY(VisibleAnywhere)
	UCapsuleComponent* CapsuleComp;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* BaseMesh;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* TurrentMesh;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* ProjectileSpawnPoint;

	void RotateTurret(FVector LookAtTarget);

	void Fire();

};
