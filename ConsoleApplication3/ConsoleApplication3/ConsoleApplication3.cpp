// ConsoleApplication3.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdlib.h>
#include<iostream>
using namespace std;

int getmax(int a, int b)
{
	return a > b ? a : b;
}

int getmax(int arr[],int count )
{
	int maxnum = arr[0];
	for (int i = 1; i < count; i++)
	{
		if (arr[i] > maxnum)
		{
			maxnum =arr[i] ;
		}
	}
	return maxnum;
}
int main(void)
{
	int numarr[3] = { 3,8,6 };
	cout << getmax(2, 5) << endl;
	cout << getmax(numarr,3) << endl;
	system("pause");
	return 0;
	
}

