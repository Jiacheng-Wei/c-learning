// ConsoleApplication2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
using namespace std;


int main()
{
	const int count = 3;
	const int *p = &count;
	
	for (int i =0; i < *p; i++)
	{
		cout << "hello imooc" << endl;
	}

	system("pause");
    return 0;
}

