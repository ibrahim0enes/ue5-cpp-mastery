// Fill out your copyright notice in the Description page of Project Settings.

#include "ShooterAI.h"
#include "BTTaskNode_Shoot.h"

UBTTaskNode_Shoot::UBTTaskNode_Shoot()
{
	NodeName = TEXT("Shoot");
}

EBTNodeResult::Type UBTTaskNode_Shoot::ExecuteTask(
	UBehaviorTreeComponent& OwnerComp,
	uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	EBTNodeResult::Type Result = EBTNodeResult::Failed;

	AShooterAI* OwnerController = Cast<AShooterAI>(OwnerComp.GetAIOwner());

	if (OwnerController)
	{
		AShooterSamCharacter* OwnerCharacter = OwnerController->MyCharacter;
		AShooterSamCharacter* PlayerCharacter = OwnerController->PlayerCharacter;

		if (OwnerCharacter && PlayerCharacter)
		{
			OwnerCharacter->Shoot();
			Result = EBTNodeResult::Succeeded;
		}
	}

	return Result;
}