// ConsoleApplication4.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdlib.h>
#include<iostream>
#include <string.h>
using namespace std;

int main(void)
{
	char *str = new char[100];
	if (str == NULL)
	{
		return 0;
		system("pause");
	}
	strcpy_s(str, 100, "hello imooc");
	int i = 0;
	while (str[i] != NULL)
	{
		cout << str[i];
		i++;
	}
	cout << endl;
	delete[]str;
	str = NULL;
	system("pause");
	return 0;
}

