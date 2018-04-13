#include "stdafx.h"
#include "ChildLabourer.h"

ChildLabourer::ChildLabourer(string name, int age):Worker(name),Children(age)
{
	cout << "childlabourer" << endl;
}
ChildLabourer::~ChildLabourer()
{
	cout << "~childlabourer" << endl;
}