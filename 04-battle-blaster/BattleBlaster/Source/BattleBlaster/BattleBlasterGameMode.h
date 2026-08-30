// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

#include "ScreenMessage.h"

#include "BattleBlasterGameMode.generated.h"

class ATank;

/**
 *
 */
UCLASS()
class BATTLEBLASTER_API ABattleBlasterGameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UScreenMessage> ScreenMesaageClass;

	UScreenMessage* ScreenMessageWidget;

	UPROPERTY(EditAnywhere)
	float GameOverDelay = 3.0f;

	UPROPERTY(EditAnywhere)
	int32 CountdownDelay = 3;

	int32  CountdownSeconds;

	FTimerHandle CountdownTimerHandle;

	bool IsGameOver = false;
	bool IsVictory = false;

	UPROPERTY(VisibleAnywhere)
	ATank* Tank = nullptr;

	UPROPERTY(VisibleAnywhere)
	int32 TowerCount = 0;

	void ActorDied(AActor* DeadActor);

	void OnGameOverTimerTiemout();
	void OnCountdownTimerTimout();

};
