// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemStatBlockComponent.h"

// Sets default values for this component's properties
UItemStatBlockComponent::UItemStatBlockComponent()
{
	// ...
	MaxHealth = 50;
	CurrentHealth = MaxHealth;
	GoldValue = 100;
}


// Called when the game starts
void UItemStatBlockComponent::BeginPlay()
{
	Super::BeginPlay();
	
	// ...
	
}


