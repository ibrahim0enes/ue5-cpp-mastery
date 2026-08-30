// Fill out your copyright notice in the Description page of Project Settings.


#include "ScreenMessage.h"

void UScreenMessage::SetMessageText(FString Message)
{
		FText MessageText = FText::FromString(Message);
		MessageBlock->SetText(MessageText);
}
