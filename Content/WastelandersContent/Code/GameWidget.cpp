#include "GameWidget.h"

GameWidget::GameWidget(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    CurrentCount = 5;
}

void GameWidget::OnLeftButtonClick()
{
    if (CurrentCount > 0)
    {
        // Add "Pistol Shot" to array as an example Anrui gave
        CurrentCount--;
        UpdateCountText();
    }
}

void GameWidget::OnRightButtonClick()
{
    if (CurrentCount >= 2)
    {
        // Add "Punch" to the array (just another random thing)
        CurrentCount -= 2;
        UpdateCountText();
    }
}

void GameWidget::UpdateCountText()
{
    CountText->SetText(FText::FromString(FString::Printf(TEXT("%d/5"), CurrentCount)));
}
