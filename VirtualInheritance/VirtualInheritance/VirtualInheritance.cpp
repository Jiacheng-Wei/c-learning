// VirtualInheritance.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "ChildLabourer.h"


int main()
{
	ChildLabourer *p= new ChildLabourer("merry",12);
	p->eat();
	p->work();
	p->play();
	delete p;
	p = NULL;
	system("pause");
    return 0;
}

