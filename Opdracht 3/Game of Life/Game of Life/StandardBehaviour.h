#pragma once
#include "CellBehaviour.h"

class StandardBehaviour : public CellBehaviour {
public:
	virtual State getUpdatedState(const int livingNeighbours, State* currentState) const;
	int minNeighboursNecessaryToSurvive = 2;
	int maxNeighboursNecessaryToSurvive = 3;
	int neighboursNecessaryToSpawn = 3;
};

