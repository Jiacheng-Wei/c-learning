// ConsoleApplication13.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Student.h"
#include <iostream>
#include<stdlib.h>
using namespace std;


int main()
{
	Student *stu = new Student;
	stu->setName("慕课网");
	cout << stu->getName() << endl;
	delete stu;
	system("pause");
    return 0;
}

