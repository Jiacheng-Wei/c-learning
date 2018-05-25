#pragma once
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

class computer
{
public:
	computer();
	~computer();
	int getcomputerchoice();
	void Print();
private:
	int computerchoice;
};