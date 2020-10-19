// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemBaseObject.h"
#include "Weapon.h"
#include "WeaponObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class THIRDPERSONGAME_API UWeaponObject : public UItemBaseObject
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	int8 BaseAttack;

public:
	void Initialize(AWeapon* WeaponActor);

	void Initialize(UWeaponAsset* WeaponAsset);

	FString ToString();

	int8 GetBaseAttack();
};
