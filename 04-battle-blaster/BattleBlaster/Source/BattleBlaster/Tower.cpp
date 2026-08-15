// Fill out your copyright notice in the Description page of Project Settings.


#include "Tower.h"

void ATower::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle FireTimerHandle;
	GetWorldTimerManager().SetTimer(FireTimerHandle, this, &ATower::CheckFireCondition, FireRate, true);
}

void ATower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Tank)
	{
		if (InFireRange())
		{
			RotateTurret(Tank->GetActorLocation());
		}
	}
}

void ATower::CheckFireCondition()
{
	if (Tank && InFireRange())
	{
			Fire();
	}
}

bool ATower::InFireRange()
{
	if (Tank)
	{
		float DistanceToTank = FVector::Dist(GetActorLocation(), Tank->GetActorLocation());
		if (DistanceToTank <= FireRange * 100.0f)
			return true;
	}
	return false;
}
