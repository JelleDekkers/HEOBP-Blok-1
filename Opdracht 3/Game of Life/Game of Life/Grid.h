#pragma once

#include "Cell.h"

struct intVector2 {
	int x;
	int y;
	intVector2(int x, int y) {
		this->x = x;
		this->y = y;
	}
};

class Grid {

const char livingSymbol = 'O'; // (char)219;
const char deadSymbol = ' ';

const int maxNeighbours = 8;
const intVector2 neighbourDirections[8] = { 
	intVector2(0, -1), // north
	intVector2(1, -1), // north east
	intVector2(1, 0), // east
	intVector2(1, 1), // south east
	intVector2(0, 1), // south 
	intVector2(-1, 1), // south west 
	intVector2(-1, 0), // west
	intVector2(-1, -1) // north west
};

public:
	Grid(int sizeX, int sizeY, CellBehaviour* behaviour);
	void drawGrid();
	void updateCells();
	
private:
	int sizeX, sizeY;
	Cell **grid;
	bool containsCoordinates(int x, int y);
	int getLivingNeighbourCount(int x, int y);
};

