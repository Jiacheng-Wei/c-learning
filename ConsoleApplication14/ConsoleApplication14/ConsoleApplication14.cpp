// ConsoleApplication14.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Line.h"
#include "Coordinate.h"
#include<stdlib.h>
#include<iostream>
using namespace std;


int main()
{
	Line *p = new Line(1, 2, 4, 5);
	p->printInfo();
	delete p;
	p = NULL;
	system("pause");
	return 0;
}

