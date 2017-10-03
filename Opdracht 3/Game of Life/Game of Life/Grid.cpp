#include "stdafx.h"
#include "Grid.h"
#include "Random.h"
#include <iostream>
using namespace std;

Grid::Grid(int sizeX, int sizeY, CellBehaviour* behaviour) {
	this->sizeX = sizeX;
	this->sizeY = sizeY;
	Random rndGenerator;
	grid = new Cell*[sizeY];

	for (int y = 0; y < sizeY; y++) {
		grid[y] = new Cell[sizeX];
	}

	for (int y = 0; y < sizeY; y++) {
		for (int x = 0; x < sizeX; x++) {
			grid[y][x].SetBehaviour(behaviour);
			if (rndGenerator.getRandomNrBetween(0, 2) == 1)
				grid[y][x].state = alive;
		}
	}
}

void Grid::drawGrid() {
	for (int y = 0; y < sizeY; y++) {
		for (int x = 0; x < sizeX; x++) {
			if (grid[y][x].state == alive)
				cout << livingSymbol;
			else
				cout << " ";

			if (x == sizeX - 1)
				cout << endl;
		}
	}
}

void Grid::updateCells() {
	for (int y = 0; y < sizeY; y++) {
		for (int x = 0; x < sizeX; x++) {
			int livingNeighbours = getLivingNeighbourCount(y, x);
			Cell *currentCell = &grid[y][x];
			currentCell->state = currentCell->behaviour->getUpdatedState(livingNeighbours, &currentCell->state);
		}
	}
}

bool Grid::containsCoordinates(int y, int x) {
	return (x >= 0 && x < sizeX && y >= 0 && y < sizeY);
}

int Grid::getLivingNeighbourCount(int y, int x) {
	int livingNeighbours = 0;

	for (int i = 0; i < maxNeighbours; i++) {
		intVector2 neighbourCoordinate = neighbourDirections[i];
		neighbourCoordinate.x += x;
		neighbourCoordinate.y += y;
		if (containsCoordinates(neighbourCoordinate.y, neighbourCoordinate.x) && grid[neighbourCoordinate.y][neighbourCoordinate.x].state == alive)
			livingNeighbours++;
	}

	return livingNeighbours;
}
