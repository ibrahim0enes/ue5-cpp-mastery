// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"

#include "Mover.h"

#include "TriggerComponent.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class DUNGEONESCAPE_API UTriggerComponent : public UBoxComponent   // UActorComponent DEÐÝL
{
	GENERATED_BODY()
public:
	UTriggerComponent();

	void Trigger(bool Newbool);
protected:
	virtual void BeginPlay() override;
public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, Category = "Trigger")
	UMover* Mover;

	UPROPERTY(EditAnywhere, Category = "Trigger")
	AActor* MoverActor;

	UPROPERTY(EditAnywhere, Category = "Trigger")
	bool bIsPressurePlate = false;

	UPROPERTY(VisibleAnywhere, Category = "Trigger")
	bool bIsTriggered = false;

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

private:
	UPROPERTY(VisibleAnywhere, Category = "Trigger")
	int32 ActivatorCounter = 0;
};