// Fill out your copyright notice in the Description page of Project Settings.


#include "StatBlockComponent.h"
#include "Languages.h"

// Sets default values for this component's properties
UStatBlockComponent::UStatBlockComponent()
{
	MaxHealth = 50;
	CurrentHealth = MaxHealth;
	ArmorClass = 10;
	GroundSpeed = 30;
	Strength = 10;
	Dexterity = 10;
	Constitution = 10;
	Intelligence = 10;
	Wisdom = 10;
	Charisma = 10;
	KnownLanguages.Add(Common);

	// ...
}


// Called when the game starts
void UStatBlockComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


