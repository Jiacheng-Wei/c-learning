#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;

class Coordinate
{
public:
	Coordinate(int x, int y);
	~Coordinate();
	void printAddr();
private:
	int m_iX;
	int m_iY;
};