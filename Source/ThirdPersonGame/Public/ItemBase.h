// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemStatBlockComponent.h"
#include "WeaponStatBlockComponent.h"
#include "InventoryItemEnum.h"
#include "ItemBase.generated.h"

UCLASS(Abstract)
class THIRDPERSONGAME_API AItemBase : public AActor
{
	GENERATED_BODY()

	//UPROPERTY(EditAnywhere)
	//UItemStatBlockComponent* ItemStatBlock;

	//UPROPERTY(EditAnywhere)
	//UWeaponBaseComponent* WeaponBase;

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
	
public:	
	// Sets default values for this actor's properties
	AItemBase();

	void AttackMe(int32 Damage);

	FName GetItemName();

	int32 GetMaxHealth();

	int32 GetCurrentHealth();

	int32 GetGoldValue();

	InventoryItemType GetType();
	void SetType(InventoryItemType Type);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	USceneComponent* _RootComponent;	

};
