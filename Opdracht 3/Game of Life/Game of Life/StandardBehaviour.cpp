#include "stdafx.h"
#include "StandardBehaviour.h"

State StandardBehaviour::getUpdatedState(const int livingNeighbours, State* currentState) const {
	if (*currentState == alive) {
		if (livingNeighbours < minNeighboursNecessaryToSurvive || livingNeighbours > maxNeighboursNecessaryToSurvive)
			return dead;
	} else {
		if (livingNeighbours == neighboursNecessaryToSpawn)
			return alive;
	}

	return *currentState;
}
