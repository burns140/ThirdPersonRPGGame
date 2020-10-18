// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemBase.h"
#include "InventoryItemEnum.h"
#include "ItemBaseObject.generated.h"

/**
 * 
 */
UCLASS()
class THIRDPERSONGAME_API UItemBaseObject : public UObject
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	FName ItemName;

	UPROPERTY(EditAnywhere)
	int32 MaxHealth;

	UPROPERTY(EditAnywhere)
	int32 CurrentHealth;

	UPROPERTY(EditAnywhere)
	int32 GoldValue;


public:
	void Initialize(AItemBase* ItemBase);

	FString ToString();

	TEnumAsByte<InventoryItemType> GetType();

protected:
	UPROPERTY(EditAnywhere)
	TEnumAsByte<InventoryItemType> Type;
};
