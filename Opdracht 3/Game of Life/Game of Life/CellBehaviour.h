#pragma once

enum State {
	alive,
	dead
};

class CellBehaviour {
public:
	virtual State getUpdatedState(const int livingNeighbours, State* currentState) const = 0;
};

