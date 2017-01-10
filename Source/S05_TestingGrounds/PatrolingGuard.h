// Yurgen Hohmeyer 2017

#pragma once

#include "TP_ThirdPerson/TP_ThirdPersonCharacter.h"
#include "PatrolingGuard.generated.h"

/**
 * 
 */
UCLASS()
class S05_TESTINGGROUNDS_API APatrolingGuard : public ATP_ThirdPersonCharacter
{
	GENERATED_BODY()

public: 
	UPROPERTY(EditInstanceOnly, Category = "Patrol Route")
	TArray<AActor*> PatrolPointsCPP;
	
	
};
