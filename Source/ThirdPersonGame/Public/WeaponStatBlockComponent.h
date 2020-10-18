// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemStatBlockComponent.h"
#include "WeaponStatBlockComponent.generated.h"

/**
 * 
 */
UCLASS()
class THIRDPERSONGAME_API UWeaponStatBlockComponent : public UItemStatBlockComponent
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	int8 BaseAttack;
};
