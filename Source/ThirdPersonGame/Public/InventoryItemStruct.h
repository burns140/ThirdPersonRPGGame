// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryItemEnum.h"
#include "InventoryItemStruct.generated.h"

/**
 * 
 */
USTRUCT()
struct FInventoryItem {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	FName ItemName;

	UPROPERTY(EditAnywhere)
	TEnumAsByte<InventoryItemType> ItemType;

	UPROPERTY(EditAnywhere)
	int8 BaseAttack;

	UPROPERTY(EditAnywhere)
	int32 MaxHealth;

	UPROPERTY(EditAnywhere)
	int32 CurrentHealth;

	UPROPERTY(EditAnywhere)
	int32 GoldValue;

	FString ToString() {
		TArray<FStringFormatArg> args;
		args.Add(FStringFormatArg(ItemName.ToString()));
		args.Add(FStringFormatArg(ItemType));
		args.Add(FStringFormatArg(BaseAttack));
		args.Add(FStringFormatArg(MaxHealth));
		args.Add(FStringFormatArg(CurrentHealth));
		args.Add(FStringFormatArg(GoldValue));

		FString Str = FString::Format(TEXT("ItemName: {0}\nItemType: {1}\nBaseAttack: {2}\nMaxHealth: {3}\nCurrentHealth: {4}\nGoldValue: {5}\n"), args);
		return Str;
	}
};
