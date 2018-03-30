// Object member pointer.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Coordinate.h"
#include "Line.h"


int main()
{
	Line *p = new Line(1, 2, 3, 4);
	p->printInfo();
	delete p;
	p = NULL;

	cout << sizeof(p) << endl;
	cout << sizeof(Line) << endl;//32位系统中一个指针占4个基本内存
	system("pause");
	return 0;
}

