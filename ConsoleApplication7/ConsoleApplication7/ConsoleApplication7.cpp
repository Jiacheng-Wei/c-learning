// ConsoleApplication7.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

class student
{
public:
	string m_strname;
	int m_iAge;
};


int main()
{
	student stu;
	stu.m_iAge = 2;
	stu.m_strname = "imooc";
	cout << stu.m_strname << " " << stu.m_iAge << endl;
	system("pause");
	return 0;
}

