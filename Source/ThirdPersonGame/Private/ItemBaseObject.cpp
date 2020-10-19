// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemBaseObject.h"
#include "ItemBase.h"

void UItemBaseObject::Initialize(AItemBase* ItemBase)
{
	this->ItemName = ItemBase->GetItemName();
	this->MaxHealth = ItemBase->GetMaxHealth();
	this->CurrentHealth = ItemBase->GetCurrentHealth();
	this->GoldValue = ItemBase->GetGoldValue();
}

void UItemBaseObject::Initialize(UItemBaseAsset* ItemBaseAsset)
{
	this->ItemName = ItemBaseAsset->ItemName;
	this->MaxHealth = ItemBaseAsset->MaxHealth;
	this->CurrentHealth = ItemBaseAsset->CurrentHealth;
	this->GoldValue = ItemBaseAsset->GoldValue;
}

FString UItemBaseObject::ToString()
{
	TArray<FStringFormatArg> args;
	args.Add(FStringFormatArg(this->ItemName.ToString()));
	args.Add(FStringFormatArg(this->MaxHealth));
	args.Add(FStringFormatArg(this->CurrentHealth));
	args.Add(FStringFormatArg(this->GoldValue));

	FString Str = FString::Format(TEXT("ItemName: {0}\nMaxHealth: {1}\nCurrentHealth: {2}\nGoldValue: {3}\n"), args);
	return Str;
}

TEnumAsByte<InventoryItemType> UItemBaseObject::GetType()
{
	return this->Type;
}
