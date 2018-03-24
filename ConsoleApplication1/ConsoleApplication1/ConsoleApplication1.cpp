// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include<stdlib.h>
#include <string.h>
using namespace std;

int isMaxorMin(int *arr, int count, bool isMax)
{
	int temp = arr[0];
	for (int i = 1; i < count; i++)
	{
		if (isMax)
		{
			if (temp < arr[i])
			{
				temp = arr[i];
			}
		}
		else
		{
			if (temp > arr[i])
			{
				temp = arr[i];
			}
		}
	}
	return temp;
}

int main(void)
{
	int count;
	cout << "请输入数组元素的个数（0,1000）" << endl;
	cin >> count;
	cout << "请输入数组元素" << endl;
	int arr1[1000];
	for (int i = 0; i < count; i++)
	{
		cin >> arr1[i];
	}
	cout << "请输入要判断最大值（1）还是最小值（0）" << endl;
	bool isMax;
	cin >> isMax;
	cout << isMaxorMin(arr1, count, isMax) << endl;
	system("pause");
	return 0;
}

