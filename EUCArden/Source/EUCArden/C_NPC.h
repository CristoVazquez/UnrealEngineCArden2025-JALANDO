#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BehaviorTree/BehaviorTree.h" // Corregido el slash '\' por '/'
#include "AIBehaviorComponent.h"
#include "C_NPC.generated.h"

UCLASS()
class EUCARDEN_API AC_NPC : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AC_NPC();

	// Función getter simple para obtener el árbol
	UBehaviorTree* GetBehaviorTree() const { return Tree; }

	// --- ESTO ES LO QUE TE FALTABA ---
	// Array de actores (puntos) para patrullar. 
	// 'EditAnywhere' te deja arrastrar los puntos en el editor.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	TArray<AActor*> Waypoints;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// El asset del Behavior Tree que asignas en el editor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	UBehaviorTree* Tree;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	// Tu componente personalizado
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	TObjectPtr<UAIBehaviorComponent> AIBehaviorComp;
};