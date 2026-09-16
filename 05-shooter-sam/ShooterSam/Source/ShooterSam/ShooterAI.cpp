// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAI.h"

#include "Kismet/GameplayStatics.h"

void AShooterAI::BeginPlay()
{
	Super::BeginPlay();

	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(),0);
	if (PlayerPawn)
	{
		SetFocus(PlayerPawn);
	}
}
