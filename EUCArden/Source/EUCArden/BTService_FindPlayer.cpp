// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_FindPlayer.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h" 
#include "GameFramework/Pawn.h"
#include "AIController.h" 
#include "DrawDebugHelpers.h"

UBTService_FindPlayer::UBTService_FindPlayer()
{
	NodeName = "Search For Player"; // Nombre en el editor
	Interval = 0.5f; // Revisar 2 veces por segundo
}

void UBTService_FindPlayer::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
    Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    AAIController* AIController = OwnerComp.GetAIOwner();
    APawn* NPCPawn = AIController ? AIController->GetPawn() : nullptr;

    if (PlayerPawn && NPCPawn)
    {
        // DIBUJAR EL CONO DE VISIÓN (Rojo si te ve, Verde si no)
        FVector MyLoc = NPCPawn->GetActorLocation();
        FVector Forward = NPCPawn->GetActorForwardVector();

        // Lógica de detección
        float Distance = FVector::Dist(PlayerPawn->GetActorLocation(), MyLoc);
        bool bCanSee = (Distance < Range); // Aquí podrías añadir LineOfSightTo también

        // Color: Rojo si te ve, Verde tranquilo
        FColor DebugColor = bCanSee ? FColor::Red : FColor::Green;

        // Dibuja el cono en el mundo
        DrawDebugCone(GetWorld(), MyLoc, Forward, Range, FMath::DegreesToRadians(45.0f), 45.0f, 12, DebugColor, false, 0.6f);

        if (bCanSee)
        {
            OwnerComp.GetBlackboardComponent()->SetValueAsObject(GetSelectedBlackboardKey(), PlayerPawn);
        }
        else
        {
            OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());
        }
    }
}