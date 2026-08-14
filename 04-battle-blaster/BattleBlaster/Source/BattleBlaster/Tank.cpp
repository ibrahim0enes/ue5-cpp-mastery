// Fill out your copyright notice in the Description page of Project Settings.


#include "Tank.h"

#include "Camera/CameraComponent.h"
#include "InputMappingContext.h"
#include "Kismet/GameplayStatics.h"



ATank::ATank()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
	SpringArmComp->SetupAttachment(CapsuleComp);

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
	CameraComp->SetupAttachment(SpringArmComp);
}
void ATank::BeginPlay()
{
	Super::BeginPlay();


	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (ULocalPlayer* LocalPlayer= PlayerController->GetLocalPlayer())
		{
			if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LocalPlayer))
			{
				Subsystem->AddMappingContext(DefaultMappingContext, 0);
			}

		}
	}

}
// Called every frame
void ATank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	if (PlayerController)
	{
		FHitResult HitResult;
		PlayerController->GetHitResultUnderCursor(ECC_Visibility, false, HitResult);

		RotateTurret(HitResult.ImpactPoint);
		 // DrawDebugSphere(GetWorld(), HitResult.ImpactPoint, 25.0f, 12, FColor::Red);
	}

}

// Called to bind functionality to input
void ATank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EIC->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ATank::MoveInput);
		EIC->BindAction(TurnAction, ETriggerEvent::Triggered, this, &ATank::TurnInput);

	}

}

void ATank::MoveInput(const FInputActionValue& Value)
{
	CurrentMoveInput = Value.Get<float>();

	FVector DeltaLocation = FVector(0, 0, 0);

	DeltaLocation.X =
		Speed *
		CurrentMoveInput *
		UGameplayStatics::GetWorldDeltaSeconds(GetWorld());

	AddActorLocalOffset(DeltaLocation, true);
}

void ATank::TurnInput(const FInputActionValue& Value)
{
	float InputValue = Value.Get<float>();

	if (CurrentMoveInput < 0.0f)
	{
		InputValue *= -1.0f;
	}

	FRotator DeltaRotation = FRotator(0, 0, 0);

	DeltaRotation.Yaw =
		TurnRate *
		InputValue *
		GetWorld()->GetDeltaSeconds();

	AddActorLocalRotation(DeltaRotation, true);
}
