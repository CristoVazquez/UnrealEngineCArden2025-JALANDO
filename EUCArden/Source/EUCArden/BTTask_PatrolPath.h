#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h" // Cambiamos a BlackboardBase para facilitar las cosas
#include "BTTask_PatrolPath.generated.h"

/**
 * Esta tarea selecciona el siguiente punto del array 'Waypoints' del NPC
 * y lo guarda en el Blackboard para que el nodo MoveTo sepa a dónde ir.
 */
UCLASS()
class EUCARDEN_API UBTTask_PatrolPath : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

public:
	UBTTask_PatrolPath();

	// La función principal que ejecuta la lógica
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

private:
	// Nombre de la clave en el Blackboard donde guardamos el ÍNDICE actual (0, 1, 2...)
	// Puedes editarlo en el editor si quieres, por defecto será "PatrolIndex"
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FBlackboardKeySelector PatrolIndexKey;
};