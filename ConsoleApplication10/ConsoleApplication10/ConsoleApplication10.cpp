// ConsoleApplication10.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Teacher.h"
#include<iostream>
#include<stdlib.h>
#include <string>
using namespace std;


int main()
{
	Teacher t;
	t.setName("孔子");
	t.setGender("男");
	t.setAge(30);
	cout << t.getName() << "  " << t.getGender() << "  " << t.getAge() << endl;
	t.teach();
	system("pause");
	return 0;
}

