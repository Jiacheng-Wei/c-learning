// ConsoleApplication11.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Teacher.h"
#include<iostream>
#include<string>
using namespace std;



int main()
{
	Teacher t1("merry",30,50);
	cout << t1.getName() << "  " << t1.getAge() << "  "<<t1.getMax()<< endl;
	system("pause");
    return 0;
}

