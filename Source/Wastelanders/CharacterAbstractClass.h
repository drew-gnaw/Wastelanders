// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CharacterAbstractClass.generated.h"

UCLASS()
class WASTELANDERS_API ACharacterAbstractClass : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACharacterAbstractClass();
	
	UFUNCTION(BlueprintCallable)
	void TakeDamage(int damage);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	//Fields
	UPROPERTY(BlueprintReadWrite, Category = "Health")
	int health;
	UPROPERTY(BlueprintReadWrite, Category = "ID")
	int ID;
	UPROPERTY(BlueprintReadWrite, Category = "Max Health")
	int MAX_HEALTH = 30;
private:
	//Private constants
	

};
