#include "BattleBlasterGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Tower.h"
#include "Tank.h"

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
}

void ABattleBlasterGameMode::ActorDied(AActor* DeadActor)
{
	if (DeadActor == Tank)
	{
		Tank->HandleDestruction();
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

			}
		}
	}

}
