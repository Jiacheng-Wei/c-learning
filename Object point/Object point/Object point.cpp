// Object point.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Coordinate.h"


int main()
{
	Coordinate *p = new Coordinate(3,4);
	p->printAddr();
	delete p;
	p = NULL;
	system("pause");
	return 0;
}

