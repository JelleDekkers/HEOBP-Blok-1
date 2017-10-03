#pragma once

#include "CellBehaviour.h"

class Cell {
public:
	Cell();
	~Cell();
	void SetBehaviour(CellBehaviour* behaviour);
	State state;
	CellBehaviour* behaviour;
};

