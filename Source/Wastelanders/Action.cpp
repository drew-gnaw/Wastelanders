// Fill out your copyright notice in the Description page of Project Settings.


#include "Action.h"

// Sets default values
AAction::AAction()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAction::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAction::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAction::Damage()
{
	card->ExecuteCardEffect(origin, target);
}

void AAction::setOrigin(ACharacterAbstractClass* x)
{
	origin = x;
}

void AAction::setTarget(ACharacterAbstractClass* x)
{
	target = x;
}

void AAction::setCard(ABaseCard* x)
{
	card = x;
}

