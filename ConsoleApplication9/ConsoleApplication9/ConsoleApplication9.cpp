// ConsoleApplication9.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Student
{
public:
	void setName(string _name)
	{
		m_strName = _name;
	}
	string getName()
	{
		return m_strName;
	}
private:
	string m_strName;
};


int main()
{
	Student *str = new Student;
	str->setName("慕课网");
	cout<< str->getName() <<endl;
	delete str;
	str = NULL;
	system("pause");
    return 0;
}

