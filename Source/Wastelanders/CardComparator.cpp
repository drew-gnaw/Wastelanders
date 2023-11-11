// Fill out your copyright notice in the Description page of Project Settings.


#include "CardComparator.h"

 ACardComparators::ACardComparators()
{
}

bool ACardComparators::IsAttackSuccessful(ABaseCard* AttackerCard, ABaseCard* TargetCard)
{
    return AttackerCard->AttackDamage > 0;
}

bool ACardComparators::ShouldStagger(ABaseCard* AttackerCard, ABaseCard* TargetCard)
{
    return AttackerCard->Speed > TargetCard->Speed && AttackerCard->StaggerValue > TargetCard->AttackDamage;
}

int32 ACardComparators::CalculateBlockDamage(ABaseCard* BlockerCard, int32 IncomingDamage)
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

