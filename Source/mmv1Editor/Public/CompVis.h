#pragma once

#include "ComponentVisualizer.h"

class FCompVis : public FComponentVisualizer
{

public:
	// Override this to draw in the scene
	virtual void DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI) override;
};