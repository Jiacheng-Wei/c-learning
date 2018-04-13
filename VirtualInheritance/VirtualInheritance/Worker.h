#pragma once
#include "Person.h"
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Worker :virtual public Person
{
public:
	Worker(string name);
	~Worker();
	void work();
protected:
	string m_strname;
};

