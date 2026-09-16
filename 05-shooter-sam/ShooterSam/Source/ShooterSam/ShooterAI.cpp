// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAI.h"

#include "Kismet/GameplayStatics.h"

void AShooterAI::BeginPlay()
{
	Super::BeginPlay();

	if (EnemyAIBehaviorTree)
	{
		RunBehaviorTree(EnemyAIBehaviorTree);
	}

}

void AShooterAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (PlayerPawn)
	{
		if (LineOfSightTo(PlayerPawn))
		{
			SetFocus(PlayerPawn);
			MoveToActor(PlayerPawn, 150);
		}
		else
		{
			ClearFocus();

		}
	}
	*/
}
