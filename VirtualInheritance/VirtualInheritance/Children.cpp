#include "stdafx.h"
#include "Children.h"

Children::Children(int age)
{
	m_iage = age;
	cout << "Children" << endl;
}
Children::~Children()
{
	cout << "~Children" << endl;
}
void Children::play()
{
	cout << m_iage << endl;
	cout << "play" << endl;
}