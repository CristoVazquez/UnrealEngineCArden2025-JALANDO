#include "AIC_NPC.h"
#include "C_NPC.h"
// --- AGREGAR ESTOS INCLUDES OBLIGATORIOS ---
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h" 

AAIC_NPC::AAIC_NPC(FObjectInitializer const& ObjectInitializer)
{
}

void AAIC_NPC::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (AC_NPC* const NPC = Cast<AC_NPC>(InPawn))
	{
		if (UBehaviorTree* const tree = NPC->GetBehaviorTree())
		{
			UBlackboardComponent* b;
			UseBlackboard(tree->BlackboardAsset, b);
			Blackboard = b; // Asigna el componente al controlador
			RunBehaviorTree(tree);
		}
	}
}