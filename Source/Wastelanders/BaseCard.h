// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CharacterAbstractClass.h"
#include "BaseCard.generated.h"

UCLASS()
class WASTELANDERS_API ABaseCard : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    ABaseCard();

public:

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Card")
    FString CardName;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Card")
    int32 AttackDamage;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Card")
    int32 StaggerValue;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Card")
    int32 BlockValue;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Card")
    int32 Speed;

    
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    UFUNCTION(BlueprintCallable)
    void setDamage(int dmg);

    virtual void ExecuteCardEffect(ACharacterAbstractClass* Origin, ACharacterAbstractClass* Target);

};
