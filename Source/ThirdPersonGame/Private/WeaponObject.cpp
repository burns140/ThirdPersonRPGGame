// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponObject.h"
#include "Weapon.h"

void UWeaponObject::Initialize(AWeapon* WeaponActor)
{
	this->BaseAttack = WeaponActor->GetBaseAttack();
	this->Type = Weapon;
	AItemBase* Base = Cast<AItemBase>(WeaponActor);
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

