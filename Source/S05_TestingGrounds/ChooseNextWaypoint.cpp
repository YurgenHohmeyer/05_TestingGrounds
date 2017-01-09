// Yurgen Hohmeyer 2017

#include "S05_TestingGrounds.h"
#include "ChooseNextWaypoint.h"




EBTNodeResult::Type UChooseNextWaypoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) {
	UE_LOG(LogTemp, Warning, TEXT("AI in C++ - yay!"));
	return EBTNodeResult::Succeeded;
}