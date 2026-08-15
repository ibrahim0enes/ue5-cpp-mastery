// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseClass.h"

#include "Tank.h"

#include "Tower.generated.h"

/**
 * 
 */
UCLASS()
class BATTLEBLASTER_API ATower : public ABaseClass
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	float FireRange = 300.0f;

	UPROPERTY(EditAnywhere)
	float FireRate = 2.0f;

	UPROPERTY(VisibleAnywhere)
	ATank* Tank = nullptr;

	void CheckFireCondition();

	bool InFireRange();
};
