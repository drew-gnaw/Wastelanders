#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "YourGameWidget.generated.h"

UCLASS()
class GAME_API GameWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    GameWidget(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
    class UButton* LeftButton;

    UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
    class UButton* RightButton;

    UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
    class UTextBlock* CountText;

    UFUNCTION(BlueprintCallable, Category = "UI")
    void OnLeftButtonClick();

    UFUNCTION(BlueprintCallable, Category = "UI")
    void OnRightButtonClick();

private:
    int32 CurrentCount;

    void UpdateCountText();
};
