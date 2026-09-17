// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAI.h"

#include "Kismet/GameplayStatics.h"

void AShooterAI::BeginPlay()
{
	Super::BeginPlay();

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

void AShooterAI::StartBehaviorTree(AShooterSamCharacter* Player)
{
	if (EnemyAIBehaviorTree)
	{
		MyCharacter = Cast<AShooterSamCharacter>(GetPawn());

		if (Player)
		{
			PlayerCharacter = Player;
		}
	
		RunBehaviorTree(EnemyAIBehaviorTree);
	}

}
