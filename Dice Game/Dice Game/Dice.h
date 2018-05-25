#pragma once
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

class Dice
{
public:
	Dice();
	~Dice();
	int playdice1();
	int playdice2();
private:
	int dicenum;
};
