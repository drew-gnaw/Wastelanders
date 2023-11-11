// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCard.h"


// Sets default values
ABaseCard::ABaseCard()
{
	CardName = "CardName";
	AttackDamage = 0;
	StaggerValue = 0;
	BlockValue = 0;
	Speed = 0;
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseCard::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseCard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseCard::ExecuteCardEffect(ACharacter* Origin, ACharacter* Target)
{
	// this is for game management (Muhammad)

}


