// ConsoleApplication15.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Array.h"
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;



int main()
{
	Array arr1;
	arr1.setCount(5);
	Array arr2 = arr1;//Array arr2(arr1)

	cout << "arr2.m_count=" << arr2.getCount() << endl;
	
	system("pause");
	return 0;
}

