// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InventoryItemEnum.h"
#include "ItemBaseAsset.generated.h"

/**
 * 
 */
UCLASS()
class THIRDPERSONGAME_API UItemBaseAsset : public UDataAsset
{
	GENERATED_BODY()


public:
	UPROPERTY(EditAnywhere)
	TEnumAsByte<InventoryItemType> Type = WorldItem;

	UPROPERTY(EditAnywhere)
	FName ItemName;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere)
	int32 MaxHealth;

	UPROPERTY(EditAnywhere)
	int32 CurrentHealth;

	UPROPERTY(EditAnywhere)
	int32 GoldValue;
	
};
