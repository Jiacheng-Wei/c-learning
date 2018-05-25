#include "stdafx.h"
#include "computer.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

computer::computer() {}
computer::~computer(){}
int computer::getcomputerchoice()
{
	srand((unsigned)time(NULL));
	computerchoice = rand() % 3;
	return computerchoice;
 }
void computer::Print()
{
	if (computerchoice == 0)
	{
		cout << "the computer's choice is scissors" << endl;
	}
	if (computerchoice == 1)
	{
		cout << "the computer's choice is rock" << endl;
	}
	if (computerchoice == 2)
	{
		cout << "the computer's choice is paper" << endl;
	}
}