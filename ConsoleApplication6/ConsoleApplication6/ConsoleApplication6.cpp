// ConsoleApplication6.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
	string name;
	cout << "please input your name" << endl;
	getline(cin, name);
	if (name.empty())
	{
		cout << "input is null" << endl;
		system("pause");
		return 0;
	}
	if (name == "imooc")
	{
		cout << "you are a administrator" << endl;
	}
	cout << "hello " + name << endl;
	cout << "your name length:" << name.size() << endl;
	cout << "your name first letter is:" << name[0] << endl;
	system("pause");
	return 0;
}

