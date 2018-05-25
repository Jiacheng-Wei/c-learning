#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;

class user
{
public:
	user();
	~user();
	void instruction();
	char getuserchoice();
private:
	char userchoice;
};