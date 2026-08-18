// Fill out your copyright notice in the Description page of Project Settings.

#include "Tank.h"

#include "Camera/CameraComponent.h"
#include "InputMappingContext.h"
#include "Kismet/GameplayStatics.h"


ATank::ATank()
{
	// Set this pawn to call Tick() every frame.
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
		PlayerController->bShowMouseCursor = true;
		PlayerController->SetInputMode(FInputModeGameAndUI());

		if (ULocalPlayer* LocalPlayer = PlayerController->GetLocalPlayer())
		{
			if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
				ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LocalPlayer))
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

		PlayerController->GetHitResultUnderCursor(
			ECC_Visibility,
			false,
			HitResult
		);

		RotateTurret(HitResult.ImpactPoint);
	}
}


// Called to bind functionality to input
void ATank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);


	if (UEnhancedInputComponent* EIC =
		Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// W / S
		EIC->BindAction(
			MoveAction,
			ETriggerEvent::Triggered,
			this,
			&ATank::MoveInput
		);

		// W / S b�rak�ld���nda
		EIC->BindAction(
			MoveAction,
			ETriggerEvent::Completed,
			this,
			&ATank::MoveCompleted
		);

		// A / D
		EIC->BindAction(
			TurnAction,
			ETriggerEvent::Triggered,
			this,
			&ATank::TurnInput
		);

		EIC->BindAction(
			FireAction, 
			ETriggerEvent::Started, 
			this, 
			&ATank::Fire
		);
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


void ATank::MoveCompleted(const FInputActionValue& Value)
{
	// W veya S b�rak�ld���nda
	// hareket input'unu s�f�rla

	CurrentMoveInput = 0.0f;
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