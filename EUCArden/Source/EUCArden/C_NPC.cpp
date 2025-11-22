#include "C_NPC.h"

// Sets default values
AC_NPC::AC_NPC()
{
	// CAMBIO: Ponemos esto en false. 
	// Como el NPC se moverá por IA (Behavior Tree), no necesitamos que este script 
	// se actualice 60 veces por segundo. Ahorra rendimiento.
	PrimaryActorTick.bCanEverTick = false;

	AIBehaviorComp = CreateDefaultSubobject<UAIBehaviorComponent>(TEXT("AIBehaviorComponent"));
}

// Called when the game starts or when spawned
void AC_NPC::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AC_NPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AC_NPC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}