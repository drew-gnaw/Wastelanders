// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseCard.h"
#include "CharacterAbstractClass.h"
#include "Action.generated.h"

/**
 *
 */
class WASTELANDERS_API Action
{
public:
	Action();
	~Action();
};


UCLASS()
class WASTELANDERS_API AAction : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAction();

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Action")
	ACharacterAbstractClass *origin;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Action")
	ACharacterAbstractClass *target;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Action")
	ABaseCard *card;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void Damage();

	UFUNCTION(BlueprintCallable)
	void setOrigin(ACharacterAbstractClass* x);

	UFUNCTION(BlueprintCallable)
	void setTarget(ACharacterAbstractClass* x);

	UFUNCTION(BlueprintCallable)
	void setCard(ABaseCard* x);

};
