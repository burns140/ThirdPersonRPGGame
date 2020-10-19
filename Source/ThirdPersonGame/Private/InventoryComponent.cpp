// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"
#include "Weapon.h"
#include "WeaponObject.h"

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
	if (item->GetType() == Weapon) {
		UWeaponObject* temp = NewObject<UWeaponObject>();
		AWeapon* actor = Cast<AWeapon>(item);
		temp->Initialize(actor);
		this->Items.Add(temp);
		this->EquippedWeapon = temp;
	}	
	
}

void UInventoryComponent::PrintInventory()
{
	UE_LOG(LogTemp, Warning, TEXT("Inventory size: %d"), Items.Num());
	for (auto& thisItem : Items) {
		if (thisItem->GetType() == Weapon) {
			UE_LOG(LogTemp, Warning, TEXT("Casted to weapon"));
			UWeaponObject* temp = Cast<UWeaponObject>(thisItem);
			UE_LOG(LogTemp, Warning, TEXT("%s"), *(temp->ToString()));
		}
		
	}
}

// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	this->EquippedWeapon = NewObject<UWeaponObject>();
	this->EquippedWeapon->Initialize(this->InitializeWeapon);
	// ...	
}

