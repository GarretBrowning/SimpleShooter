// Copyright Garret Browning 2021

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ShooterAIController.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API AShooterAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	virtual void Tick(float DeltaSeconds) override;

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere)
	class UBehaviorTree* AIBehavior;
	bool bHasLineOfSight = false;

	// UPROPERTY(EditAnywhere)
	// float AcceptanceRadius = 200.f;
	
};
