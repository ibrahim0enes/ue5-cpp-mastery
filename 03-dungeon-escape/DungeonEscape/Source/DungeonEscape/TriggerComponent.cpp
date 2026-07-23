// Fill out your copyright notice in the Description page of Project Settings.
#include "TriggerComponent.h"

UTriggerComponent::UTriggerComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	

}

void UTriggerComponent::BeginPlay()
{
	Super::BeginPlay();

	if (MoverActor)
	{
		Mover = MoverActor->FindComponentByClass<UMover>();
		if (Mover)
		{
			UE_LOG(LogTemp, Display, TEXT("Succesfully found the mover component!"));

		}
		else
		{
			UE_LOG(LogTemp, Display, TEXT("Failed to find mover component!"));
		}
	}

	else
	{
		UE_LOG(LogTemp, Display, TEXT("MoverActor is nullptr"));
	}

	if (bIsPressurePlate)
	{
		OnComponentBeginOverlap.AddDynamic(this, &UTriggerComponent::OnOverlapBegin);
		OnComponentEndOverlap.AddDynamic(this, &UTriggerComponent::OnOverlapEnd);
	}
	
}

void UTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


}

void UTriggerComponent::Trigger(bool Newbool)
{
	bIsTriggered = Newbool;

	if (Mover)
	{
		Mover->SetShouldMove(Newbool);
	}
}

void UTriggerComponent::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor->ActorHasTag("Activator"))
	{
		ActivatorCounter++;
		if (bIsTriggered)
		{
			Trigger(true);
		}
	}
}

void UTriggerComponent::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && OtherActor->ActorHasTag("Activator"))
	{
		ActivatorCounter--;

		if (bIsTriggered && ActivatorCounter == 0)
		{
			Trigger(false);
		}
	}
}
