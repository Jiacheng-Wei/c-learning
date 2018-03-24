#include "stdafx.h"
#include "Student.h"
#include<string>
#include<iostream>
using namespace std;

Student::Student()
{
	cout << "Student()" << endl;
}
Student::Student(string _name) :m_strName(_name)
{
	cout << "Student(string _name) :m_strName(_name)" << endl;
}
Student::Student(const Student&stu)
{
	cout << "Student(const Student&stu)" << endl;
}
Student::~Student()
{
	cout << "~Student()" << endl;
}
void Student::setName(string _name)
{
	m_strName = _name;
}
string Student::getName()
{
	return m_strName;
}