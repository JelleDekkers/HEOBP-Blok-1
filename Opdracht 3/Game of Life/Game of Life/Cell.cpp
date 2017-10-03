#include "stdafx.h"
#include "Cell.h"

Cell::Cell() {
	this->behaviour = behaviour;
	state = dead;
}

Cell::~Cell() { }

void Cell::SetBehaviour(CellBehaviour* behaviour) {
	this->behaviour = behaviour;
}
