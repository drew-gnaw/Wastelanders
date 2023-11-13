// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "BaseCard.h"
#include "CardComparator.generated.h"

UCLASS()
class WASTELANDERS_API ACardComparators : public AGameStateBase
{
    GENERATED_BODY()

public:
    ACardComparators();

    UFUNCTION(BlueprintCallable, Category = "Card")
    static bool IsAttackSuccessful(ABaseCard* AttackerCard, ABaseCard* TargetCard);

    UFUNCTION(BlueprintCallable, Category = "Card")
    static bool ShouldStagger(ABaseCard* AttackerCard, ABaseCard* TargetCard);

    UFUNCTION(BlueprintCallable, Category = "Card")
    static int32 CalculateBlockDamage(ABaseCard* BlockerCard, int32 IncomingDamage);
};

