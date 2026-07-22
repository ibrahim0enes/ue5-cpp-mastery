// Fill out your copyright notice in the Description page of Project Settings.
#include "TriggerComponent.h"
#include "Components/BoxComponent.h"
#include "Mover.h"

UTriggerComponent::UTriggerComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
}

void UTriggerComponent::BeginPlay()
{
	Super::BeginPlay();

	if (!GetOwner())
	{
		return;
	}

	if (GetOwner()->GetRootComponent())
	{
		BoxComp->AttachToComponent(GetOwner()->GetRootComponent(),
			FAttachmentTransformRules::KeepRelativeTransform);
	}
	BoxComp->SetCollisionProfileName(TEXT("OverlapAllDynamic"));

	CachedMover = GetOwner()->FindComponentByClass<UMover>();
	if (!CachedMover)
	{
		UE_LOG(LogTemp, Warning, TEXT("TriggerComponent: %s has no UMover component."), *GetOwner()->GetName());
	}

	BoxComp->OnComponentBeginOverlap.AddDynamic(this, &UTriggerComponent::OnBoxOverlapBegin);
	BoxComp->OnComponentEndOverlap.AddDynamic(this, &UTriggerComponent::OnBoxOverlapEnd);
}

void UTriggerComponent::Trigger(bool NewTriggerValue)
{
	if (CachedMover)
	{
		CachedMover->SetShouldMove(NewTriggerValue);
	}
}

void UTriggerComponent::OnBoxOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Trigger(true);
}

void UTriggerComponent::OnBoxOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	Trigger(false);
}