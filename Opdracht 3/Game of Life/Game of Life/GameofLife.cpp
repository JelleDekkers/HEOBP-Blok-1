#include "stdafx.h" 
#include "Grid.h"
#include "StandardBehaviour.h"
#include "LoneBehaviour.h"
#include "herdBehaviour.h"

#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

CellBehaviour* standard = new StandardBehaviour();
CellBehaviour* loner = new LoneBehaviour();
CellBehaviour* herd = new HerdBehaviour();
CellBehaviour* behaviour = standard;
const int gridSizeX = 25, gridSizeY = 25;
Grid grid(gridSizeX, gridSizeY, behaviour);
const int sleepTime = 500;

void clearConsole();
void goToConsoleLine(int charNr, int lineNr);

int main() {
	while(true) {
		grid.drawGrid();
		grid.updateCells();
		goToConsoleLine(0, 0);
		Sleep(sleepTime);
	}
    return 0;
}

void goToConsoleLine(int charNr, int lineNr) {
	COORD coord{ (short)charNr, (short)lineNr };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	return;
}

void clearConsole() {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord = { 0, 0 };
	DWORD count;
	CONSOLE_SCREEN_BUFFER_INFO csbi;	
	if (GetConsoleScreenBufferInfo(hStdOut, &csbi)) {
			//This fills the buffer with a given character (in this case 32=space).
			FillConsoleOutputCharacter(hStdOut, (TCHAR)32, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);
			FillConsoleOutputAttribute(hStdOut, csbi.wAttributes, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);
			//This will set our cursor position for the next print statement.
			SetConsoleCursorPosition(hStdOut, coord);
	}
	return;
}
