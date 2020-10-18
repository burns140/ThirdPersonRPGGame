// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"

AWeapon::AWeapon()
{
	//WeaponBase = CreateDefaultSubobject<UWeaponStatBlockComponent>(TEXT("Weapon base"));
	BaseAttack = 10;

	this->SetType(Weapon);
}

int8 AWeapon::GetBaseAttack()
{
	return this->BaseAttack;
}
