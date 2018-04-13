#pragma once
#include "Person.h"

class Children :virtual public Person
{
public:
	Children(int age);
	~Children();
	void play();
protected:
	int m_iage;
};