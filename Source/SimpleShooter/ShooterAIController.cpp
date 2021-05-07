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
        FVector StartLocation = GetPawn()->GetActorLocation();
        GetBlackboardComponent()->SetValueAsVector(TEXT("StartLocation"), StartLocation);
    }
}

void AShooterAIController::Tick(float DeltaSeconds) 
{
    Super::Tick(DeltaSeconds);
}
