// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemBase.h"

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
	

	//ItemStatBlock = CreateDefaultSubobject<UItemStatBlockComponent>(TEXT("Item stat block"));
	//WeaponBase = CreateDefaultSubobject<UWeaponBaseComponent>(TEXT("Weapon stat block"));
}

// Called when the game starts or when spawned
void AItemBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void AItemBase::AttackMe()
{
	this->CurrentHealth -= 10;
	UE_LOG(LogTemp, Warning, TEXT("I have been attacked. Health is now %d"), this->CurrentHealth);
}

// Called every frame
void AItemBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

