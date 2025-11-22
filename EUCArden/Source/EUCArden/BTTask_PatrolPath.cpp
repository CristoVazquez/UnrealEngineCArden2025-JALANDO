#include "BTTask_PatrolPath.h"
#include "AIC_NPC.h"
#include "C_NPC.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_PatrolPath::UBTTask_PatrolPath()
{
    NodeName = "Find Next Patrol Point"; // Nombre 
}

EBTNodeResult::Type UBTTask_PatrolPath::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    //  Obtener el Controlador y el NPC
    AAIController* AIController = OwnerComp.GetAIOwner();
    if (!ensure(AIController)) return EBTNodeResult::Failed;

    AC_NPC* NPC = Cast<AC_NPC>(AIController->GetPawn());
    if (!NPC) return EBTNodeResult::Failed;

    //  Verificar que tenemos puntos a donde ir
    if (NPC->Waypoints.Num() == 0)
    {
        return EBTNodeResult::Failed;
    }

    //  Obtener el Blackboard
    UBlackboardComponent* Blackboard = OwnerComp.GetBlackboardComponent();

    //  Leer el índice actual (Key: PatrolIndex)
    // Nota: Asumimos que creaste una Key tipo Integer llamada "PatrolIndex" en tu Blackboard Asset
    int32 CurrentIndex = Blackboard->GetValueAsInt("PatrolIndex");

    //  Validar el índice (por si acaso es mayor que el array)
    if (!NPC->Waypoints.IsValidIndex(CurrentIndex))
    {
        CurrentIndex = 0;
    }

    //  Obtener el actor destino (la flecha/punto en el mundo)
    AActor* TargetPoint = NPC->Waypoints[CurrentIndex];

    if (TargetPoint)
    {
        // GUARDAR EL DESTINO EN EL BLACKBOARD
        // Usamos la clave que definimos en el header (SelectedKeyName viene de BlackboardBase)
        // Esto actualiza la variable "TargetLocation" o "TargetActor" que use tu nodo MoveTo
        Blackboard->SetValueAsObject(GetSelectedBlackboardKey(), TargetPoint);

        // Calcular el siguiente índice para la próxima vuelta (bucle infinito)
        int32 NextIndex = (CurrentIndex + 1) % NPC->Waypoints.Num();
        Blackboard->SetValueAsInt("PatrolIndex", NextIndex);

        return EBTNodeResult::Succeeded;
    }

    return EBTNodeResult::Failed;
}