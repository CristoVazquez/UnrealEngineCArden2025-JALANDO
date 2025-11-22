// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTService_FindPlayer.generated.h"

/**
 * Este servicio revisa constantemente si el jugador está cerca.
 */
UCLASS()
class EUCARDEN_API UBTService_FindPlayer : public UBTService_BlackboardBase
{
	GENERATED_BODY()

public:
	UBTService_FindPlayer();

protected:
	// Esta función se ejecuta como un "Tick" (reloj) del árbol
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	UPROPERTY(EditAnywhere, Category = "AI")
	float Range = 800.0f; // Distancia de visión 
};