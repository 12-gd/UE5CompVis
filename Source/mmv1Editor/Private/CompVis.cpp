#include "Data/DungeonRoomInfo.h"
#include "CompVis.h"

void FCompVis::DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI)
{
	// 
    const UDungeonRoomInfo* MyComponent = Cast<UDungeonRoomInfo>(Component);
    if (!MyComponent)
    {
        return;
    }

    double Thickness = 30;
    PDI->DrawPoint(MyComponent->GetOwner()->GetActorLocation(), FLinearColor::Green, Thickness, SDPG_World);

}