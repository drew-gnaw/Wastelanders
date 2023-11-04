#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseCard.h"
#include "CardComparators.generated.h"

UCLASS()
class YOURGAME_API UCardComparators : public UObject
{
    GENERATED_BODY()

public:
    UCardComparators();

    UFUNCTION(BlueprintCallable, Category = "Card")
    static bool IsAttackSuccessful(UBaseCard* AttackerCard, UBaseCard* TargetCard);

    UFUNCTION(BlueprintCallable, Category = "Card")
    static bool ShouldStagger(UBaseCard* AttackerCard, UBaseCard* TargetCard);

    UFUNCTION(BlueprintCallable, Category = "Card")
    static int32 CalculateBlockDamage(UBaseCard* BlockerCard, int32 IncomingDamage);
};
