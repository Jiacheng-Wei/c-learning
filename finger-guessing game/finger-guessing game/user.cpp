#include "stdafx.h"
#include "user.h"
#include<iostream>
#include<stdlib.h>
using namespace std;

user::user(){}
user::~user(){}
void user::instruction()
{
	cout << "a or A:scissors" << endl;
	cout << "b or B:rock" << endl;
	cout << "c or C:paper" << endl;
}
char user::getuserchoice()
{
	cout << "please input your choice" << endl;
	cin >> userchoice;
	return userchoice;
}