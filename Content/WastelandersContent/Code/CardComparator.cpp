#include "CardComparators.h"

UCardComparators::UCardComparators()
{
}

bool UCardComparators::IsAttackSuccessful(UBaseCard* AttackerCard, UBaseCard* TargetCard)
{
    return AttackerCard->AttackDamage > 0;
}

bool UCardComparators::ShouldStagger(UBaseCard* AttackerCard, UBaseCard* TargetCard)
{
    return AttackerCard->Speed > TargetCard->Speed && AttackerCard->StaggerValue > TargetCard->AttackDamage;
}

int32 UCardComparators::CalculateBlockDamage(UBaseCard* BlockerCard, int32 IncomingDamage)
{
    if (BlockerCard->BlockValue >= IncomingDamage)
    {
        BlockerCard->BlockValue -= IncomingDamage;
        return 0;
    }
    else
    {
        int32 remainingDamage = IncomingDamage - BlockerCard->BlockValue;
        BlockerCard->BlockValue = 0;
        return remainingDamage;
    }
}
