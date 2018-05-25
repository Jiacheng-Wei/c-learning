#include "Dice.h"
#include "stdafx.h"
#include "Dice.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

Dice::Dice()
{
	dicenum = 0;
}
Dice::~Dice(){}
int Dice::playdice1()
{
	srand((unsigned)time(NULL));
	dicenum= rand() % 6 + 1;
	return dicenum;
}
int Dice::playdice2()
{
	dicenum = rand() % 6 + 1;
	return dicenum;
}