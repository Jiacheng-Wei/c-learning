// ConsoleApplication5.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdlib.h>
#include<iostream>
using namespace std;

class Cordinate
{
public:
	int x;
	int y;
	void printx()
	{
		cout << x << endl;
	}
	void printy()
	{
		cout << y << endl;
	}
};

int main(void)
{
	Cordinate *coor=new Cordinate();
	if (p == NULL)
	{
		return 0;
	}
	coor->x = 10;
	coor->y = 20;
	coor->printx();
	coor->printy();
	system("pause");
	delete p;
	p = NULL;
    return 0;
}

