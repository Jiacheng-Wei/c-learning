#include "stdafx.h"
#include "MazePerson.h"

void MazePerson::gotoxy(int x, int y)
{
	COORD cd;
	cd.X = x;
	cd.Y = y;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(handle, cd);
}