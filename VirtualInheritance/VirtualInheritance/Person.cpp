#include "stdafx.h"
#include "Person.h"

Person::Person()
{
	cout << "Person" << endl;
}
Person::~Person()
{
	cout << "~Person" << endl;
}
void Person::eat()
{
	cout << "eat" << endl;
}