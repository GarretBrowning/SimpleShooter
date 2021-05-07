// Copyright Garret Browning 2021


#include "KillEmAllGameMode.h"


void AKillEmAllGameMode::PawnKilled(APawn* PawnKilled) 
{
    Super::PawnKilled(PawnKilled);

    UE_LOG(LogTemp, Warning, TEXT("A Pawn was Killed!"));
}
