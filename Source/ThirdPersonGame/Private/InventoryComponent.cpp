// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"
#include "Weapon.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	//PrimaryComponentTick.bCanEverTick = true;

	// ...
}


void UInventoryComponent::PickupItem(AItemBase* item)
{
	//this->Items.Add(item);
	FInventoryItem InventoryItem;
	InventoryItem.ItemType = item->GetType();
	InventoryItem.ItemName = item->GetItemName();
	InventoryItem.MaxHealth = item->GetMaxHealth();
	InventoryItem.CurrentHealth = item->GetCurrentHealth();
	InventoryItem.GoldValue = item->GetGoldValue();

	if (item->GetType() == Weapon) {
		AWeapon* Weapon = nullptr;
		Weapon = Cast<AWeapon>(item);
		InventoryItem.BaseAttack = Weapon->GetBaseAttack();
	}

	this->Items.Add(InventoryItem);
}

void UInventoryComponent::PrintInventory()
{
	//FInventoryItem* InvPtr;
	UE_LOG(LogTemp, Warning, TEXT("Inventory size: %d"), Items.Num());
	for (auto& thisItem : Items) {
		UE_LOG(LogTemp, Warning, TEXT("\n%s"), *(thisItem.ToString()));
	}
}

// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...	
}

