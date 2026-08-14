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

	AActor* Tower = Tower[0];

	int32	i = 0;
	while (i <= TowerCount)
	{
		AActor* TowerActor = Towers[i]
		if (TowerActor)
		{
			ATower* Tower = Cast<ATower>(TowerActor);
			if (Tower && Tank)
			{
				Tower->Tank = Tank;
			}
		}
		i++;
	}
}