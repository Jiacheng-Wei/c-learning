#include "stdafx.h"
#include "Coordinate.h"

Coordinate::Coordinate(int x, int y)
{
	m_iX = x;
	m_iY = y;
}
Coordinate::~Coordinate()
{
	cout << "~Coordinate" << endl;
}
void Coordinate::printAddr()
{
	cout << "(" << m_iX << "," << m_iY << ")" << endl;
}
