// Fill out your copyright notice in the Description page of Project Settings.


#include "HUDWidget.h"

void UHUDWidget::SetHealthPercent(float Percent)
{
	if (Percent >= 0.0f && Percent <= 1.0f)
	{
		HealthBar->SetPercent(Percent);
	}

}
