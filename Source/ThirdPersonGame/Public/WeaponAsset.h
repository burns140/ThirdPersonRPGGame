// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemBaseAsset.h"
#include "WeaponAsset.generated.h"

/**
 * 
 */
UCLASS()
class THIRDPERSONGAME_API UWeaponAsset : public UItemBaseAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	int8 BaseAttack;
};
