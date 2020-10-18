// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemBase.h"
#include "WeaponStatBlockComponent.h"
#include "Weapon.generated.h"

/**
 * 
 */
UCLASS()
class THIRDPERSONGAME_API AWeapon : public AItemBase
{
	GENERATED_BODY()

	/*UPROPERTY(EditAnywhere)
	UWeaponStatBlockComponent* WeaponBase;*/

	UPROPERTY(EditAnywhere)
	int8 BaseAttack;

public:
	AWeapon();
	
	int8 GetBaseAttack();
};
