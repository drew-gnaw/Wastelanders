#include "BaseCard.h"

UBaseCard::UBaseCard()
{
    CardName = "CardName";
    AttackDamage = 0;
    StaggerValue = 0;
    BlockValue = 0;
    Speed = 0;
}

void UBaseCard::ExecuteCardEffect(ACharacter* Owner, ACharacter* Target)
{
    // this is for game management (Muhammad)
}
