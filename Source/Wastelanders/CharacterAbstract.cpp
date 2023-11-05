// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterAbstract.h"

// Sets default values
ACharacterAbstract::ACharacterAbstract()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACharacterAbstract::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacterAbstract::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

