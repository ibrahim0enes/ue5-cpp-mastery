// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAI.h"
#include "Kismet/GameplayStatics.h"

void AShooterAI::BeginPlay()
{
	Super::BeginPlay();

	CachedPlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
}

void AShooterAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    APawn* Player = CachedPlayerPawn.Get();
    if (!Player) return;

    if (LineOfSightTo(Player))
    {
        SetFocus(Player, EAIFocusPriority::Gameplay);

        // Yolu sadece durum deðiþtiðinde veya hareket tamamlandýðýnda yenile
        if (!bIsChasing)
        {
            MoveToActor(Player, 150.0f);
            bIsChasing = true;
        }
    }
    else
    {
        if (bIsChasing)
        {
            ClearFocus(EAIFocusPriority::Gameplay);
            StopMovement();
            bIsChasing = false;
        }
    }
}
