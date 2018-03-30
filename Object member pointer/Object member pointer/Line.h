#pragma once
#include "Coordinate.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

class Line
{
public:
	Line(int x1, int y1, int x2, int y2);
		~Line();
	void printInfo();
private:
	Coordinate *m_pCoorA;
	Coordinate *m_pCoorB;
};