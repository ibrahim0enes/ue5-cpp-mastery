#include "BattleBlasterGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Tower.h"
#include "Tank.h"
#include "BattleBlasterGameInstance.h"

void ABattleBlasterGameMode::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> Towers;

	UGameplayStatics::GetAllActorsOfClass(
		GetWorld(),
		ATower::StaticClass(),
		Towers
	);

	TowerCount = Towers.Num();

	UE_LOG(LogTemp, Warning, TEXT("Number of Towers: %d"), TowerCount);

	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	if (PlayerPawn)
	{
		Tank = Cast<ATank>(PlayerPawn);

		if (!Tank)
		{
			UE_LOG(LogTemp, Warning, TEXT("FAILED TO FIND TANK"));
		}
	}

	for (int32 i = 0; i < TowerCount; i++)
	{
		AActor* TowerActor = Towers[i];
		if (TowerActor)
		{
			ATower* Tower = Cast<ATower>(TowerActor);
			if (Tower && Tank)
			{
				Tower->Tank = Tank;
			}
		}
	}

	CountdownSeconds = CountdownDelay;
	GetWorldTimerManager().SetTimer(CountdownTimerHandle,this,
		&ABattleBlasterGameMode::OnCountdownTimerTimout, 1.0f, true);
}

void ABattleBlasterGameMode::OnCountdownTimerTimout()
{
	CountdownSeconds--;
	if (CountdownSeconds > 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Countdown :%d"), CountdownSeconds);
	}
	else if (CountdownSeconds == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT(" \n\t GOOO !! \n\t"));
		Tank->SetPlayerEnabled(true);
	}
	else
	{
		GetWorldTimerManager().ClearTimer(CountdownTimerHandle);
		UE_LOG(LogTemp, Warning, TEXT("Clear Timer"));
	}

}

void ABattleBlasterGameMode::ActorDied(AActor* DeadActor)
{

	if (DeadActor == Tank)
	{
		Tank->HandleDestruction();
		IsGameOver = true;
	}
	else
	{
		ATower* DeadTower = Cast<ATower>(DeadActor);
		if (DeadTower)
		{
			DeadTower->HandleDestruction();
			TowerCount--;

			if (TowerCount == 0)
			{
				IsGameOver = true;
				IsVictory = true;
			}
		}
	}

	if (IsGameOver)
	{
		FString GameOverString = IsVictory ? "Victory" : "Deffeat!";
	
		UE_LOG(LogTemp, Warning, TEXT("Game Over %s"), *GameOverString);

		FTimerHandle GameOverTimerHandle;
		GetWorldTimerManager().SetTimer(GameOverTimerHandle, this,
			&ABattleBlasterGameMode::OnGameOverTimerTiemout, GameOverDelay, false);
	}

}

void ABattleBlasterGameMode::OnGameOverTimerTiemout()
{
	UGameInstance* GameInstance = GetGameInstance();

	if (GameInstance)
	{
		UBattleBlasterGameInstance* BattleBlasterGameInstance = Cast<UBattleBlasterGameInstance>(GameInstance);
		if (BattleBlasterGameInstance)
		{
			if (IsVictory)
			{
				BattleBlasterGameInstance->LoadNextLevel();
			}
			else
			{
				BattleBlasterGameInstance->RestartCurrentLevel();
			}
		}
	}

	
}


