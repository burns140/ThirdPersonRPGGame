// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ItemBase.h"
#include "InventoryItemStruct.h"
#include "ItemBaseObject.h"
#include "WeaponObject.h"
#include "WeaponAsset.h"
#include "InventoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THIRDPERSONGAME_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

	UPROPERTY(EditAnywhere)
	UWeaponObject* EquippedWeapon;

	UPROPERTY(EditAnywhere)
	UWeaponAsset* InitializeWeapon;

	UPROPERTY(EditAnywhere)
	FInventoryItem EquippedHelmet;

	UPROPERTY(EditAnywhere)
	FInventoryItem EquippedChestpiece;

	UPROPERTY(EditAnywhere)
	FInventoryItem EquippedBoots;

	UPROPERTY(EditAnywhere)
	TArray<UItemBaseObject*> Items;

	UFUNCTION()
	void PickupItem(AItemBase* item);

	void PrintInventory();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
		
};
