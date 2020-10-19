// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemBase.h"
#include "Weapon.h"

// Sets default values
AItemBase::AItemBase()
{

	_RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root component"));
	RootComponent = _RootComponent;

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ItemName = "Placeholder Name";
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);

	MaxHealth = 50;
	CurrentHealth = MaxHealth;
	GoldValue = 100;
}

// Called when the game starts or when spawned
void AItemBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void AItemBase::AttackMe(int32 Damage)
{
	this->CurrentHealth -= Damage;
	UE_LOG(LogTemp, Warning, TEXT("I have been attacked. Health is now %d"), this->CurrentHealth);
	if (this->CurrentHealth <= 0) {
		this->Destroy();
	}
}

FName AItemBase::GetItemName()
{
	return this->ItemName;
}

int32 AItemBase::GetMaxHealth()
{
	return this->MaxHealth;
}

int32 AItemBase::GetCurrentHealth()
{
	return this->CurrentHealth;
}

int32 AItemBase::GetGoldValue()
{
	return this->GoldValue;
}

InventoryItemType AItemBase::GetType()
{
	return this->Type;
}

void AItemBase::SetType(InventoryItemType SetType)
{
	this->Type = SetType;
}

// Called every frame
void AItemBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



