// Fill out your copyright notice in the Description page of Project Settings.

#include "BT_Service_PlayerLocationIfSeen.h"
#include "BehaviorTree/BlackboardComponent.h"

#include "ShooterAI.h"

UBT_Service_PlayerLocationIfSeen::UBT_Service_PlayerLocationIfSeen()
{
	NodeName = "Player Location If Seen";
}
void UBT_Service_PlayerLocationIfSeen::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	AShooterAI* OwnerController = Cast<AShooterAI>(OwnerComp.GetAIOwner());
	AShooterSamCharacter* Player = OwnerController->PlayerCharacter;
	UBlackboardComponent* BlackBoard = OwnerController->GetBlackboardComponent();

	if (OwnerController && Player && BlackBoard)
	{
		if (OwnerController->LineOfSightTo(Player))
		{
			BlackBoard->SetValueAsVector(GetSelectedBlackboardKey(), Player->GetActorLocation());
			OwnerController->SetFocus(Player);
		}
		else
		{
			BlackBoard->ClearValue(GetSelectedBlackboardKey());
			OwnerController->ClearFocus(EAIFocusPriority::Gameplay);
		}
	}
}
   