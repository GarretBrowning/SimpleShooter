// Copyright Garret Browning 2021


#include "ShooterAIController.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"

void AShooterAIController::BeginPlay() 
{
    Super::BeginPlay();

    if (AIBehavior != nullptr)
    {
        RunBehaviorTree(AIBehavior);

        APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

        FVector StartLocation = GetPawn()->GetActorLocation();

        GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerLocation"), PlayerPawn->GetActorLocation());
        GetBlackboardComponent()->SetValueAsVector(TEXT("StartLocation"), StartLocation);
    }
    
}

void AShooterAIController::Tick(float DeltaSeconds) 
{
    Super::Tick(DeltaSeconds);
  
    
    // bHasLineOfSight = LineOfSightTo(PlayerPawn);

    // if (bHasLineOfSight)
    // {
    //    SetFocus(PlayerPawn);
    //    MoveToActor(PlayerPawn, AcceptanceRadius);
    // }
    // else
    // {
    //     ClearFocus(EAIFocusPriority::Gameplay);
    //     StopMovement();
    // }
}
