#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseCard.generated.h"

UCLASS(Blueprintable, abstract)
class YOURGAME_API UBaseCard : public UObject
{
    GENERATED_BODY()

public:
    UBaseCard();

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
    
    virtual void ExecuteCardEffect(class ACharacter* Owner, class ACharacter* Target);
};
