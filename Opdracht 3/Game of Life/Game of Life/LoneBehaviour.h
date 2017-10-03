#pragma once
#include "CellBehaviour.h"

class LoneBehaviour : public CellBehaviour {
public:
	virtual State getUpdatedState(const int livingNeighbours, State* currentState) const;
	int minNeighboursNecessaryToSurvive = 0;
	int maxNeighboursNecessaryToSurvive = 2;
	int neighboursNecessaryToSpawn = 2;
};

