// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Languages.h"
#include "StatBlockComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THIRDPERSONGAME_API UStatBlockComponent : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	int16 MaxHealth;

	UPROPERTY(EditAnywhere)
	int16 CurrentHealth;

	UPROPERTY(EditAnywhere)
	int16 ArmorClass;

	UPROPERTY(EditAnywhere)
	int16 GroundSpeed;

	UPROPERTY(EditAnywhere)
	int8 Strength;

	UPROPERTY(EditAnywhere)
	int8 Dexterity;

	UPROPERTY(EditAnywhere)
	int8 Constitution;

	UPROPERTY(EditAnywhere)
	int8 Intelligence;

	UPROPERTY(EditAnywhere)
	int8 Wisdom;

	UPROPERTY(EditAnywhere)
	int8 Charisma;

	UPROPERTY(EditAnywhere)
	TArray<TEnumAsByte<Languages>> KnownLanguages;
public:	
	// Sets default values for this component's properties
	UStatBlockComponent();


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	

		
};
