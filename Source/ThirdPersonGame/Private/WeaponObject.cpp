// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponObject.h"
#include "Weapon.h"
#include "WeaponAsset.h"
#include "ItemBaseAsset.h"

void UWeaponObject::Initialize(AWeapon* WeaponActor)
{
	this->BaseAttack = WeaponActor->GetBaseAttack();
	this->Type = Weapon;
	AItemBase* Base = Cast<AItemBase>(WeaponActor);
	Super::Initialize(Base);
}

void UWeaponObject::Initialize(UWeaponAsset* WeaponAsset)
{
	this->BaseAttack = WeaponAsset->BaseAttack;
	this->Type = Weapon;
	UItemBaseAsset* Base = Cast<UItemBaseAsset>(WeaponAsset);
	Super::Initialize(Base);
}

FString UWeaponObject::ToString()
{
	FString Str = Super::ToString();
	TArray<FStringFormatArg> args;
	args.Add(FStringFormatArg(this->BaseAttack));
	Str.Append(FString::Format(TEXT("BaseAttack: {0}"), args));

	return Str;
}

int8 UWeaponObject::GetBaseAttack()
{
	return this->BaseAttack;
}

