// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterAbstractClass.h"
#include "Math/UnrealMathUtility.h"


// Sets default values
ACharacterAbstractClass::ACharacterAbstractClass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	health = MAX_HEALTH;

}

void ACharacterAbstractClass::TakeDamage(int damage)
{
	health = FMath::Clamp(health - damage, 0, MAX_HEALTH);
}

// Called when the game starts or when spawned
void ACharacterAbstractClass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacterAbstractClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

