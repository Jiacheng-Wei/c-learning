#pragma once
#include "Children.h"
#include "Worker.h"
class ChildLabourer :public Children, public Worker
{
public:
	ChildLabourer(string name, int age);
	~ChildLabourer();
 };
