#pragma once
#include "CellBehaviour.h"

class HerdBehaviour : public CellBehaviour {
public:
	virtual State getUpdatedState(const int livingNeighbours, State* currentState) const;
	int minNeighboursNecessaryToSurvive = 4;
	int maxNeighboursNecessaryToSurvive = 6;
	int neighboursNecessaryToSpawn = 3;
};

