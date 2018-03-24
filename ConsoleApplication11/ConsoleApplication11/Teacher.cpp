#include"stdafx.h"
#include"Teacher.h"

Teacher::Teacher(string _name,int _age,int _m):m_strName(_name),m_iAge(_age),m_iMax(_m)
{
	cout << "Teacher(string _name,int _age)" << endl;
}

void Teacher::setName(string _name)
{
	m_strName = _name;
}
string Teacher::getName()
{
	return m_strName;
}
void Teacher::setAge(int _age)
{
	m_iAge = _age;
}
int Teacher::getAge()
{
	return m_iAge;
}
int Teacher::getMax()
{
	return m_iMax;
}