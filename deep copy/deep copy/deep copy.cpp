// deep copy.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Array.h"


int main()
{
	Array arr1(5);
	Array arr2(arr1);
	arr1.printAddr();
	arr1.printArr();
	arr2.printAddr();
	arr2.printArr();
	system("pause");
	return 0;
}

