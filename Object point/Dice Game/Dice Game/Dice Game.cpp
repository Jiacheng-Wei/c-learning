// Dice Game.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Dice.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

bool checkblock()
{
	cout << "whether or not continue game(Y/N)" << endl;
	char ans;
	bool flag;
	cin >> ans;
	if (ans == 'Y')
	{
		return true;
	}
	else return false;
}

int main()
{
	int sum, dc1, dc2;
	bool flag;
	Dice f;
	while (1)
	{
		cout << "-------------------------------welcome to Dice game-------------------------------" << endl;
		dc1 = f.playdice1();
		dc2 = f.playdice2();
		sum = dc1 + dc2;
		cout << dc1 << "," << dc2 << "," << sum << endl;
		if (sum == 7 || sum == 11)
		{
			cout << "you win" << endl;
			flag = checkblock();
			if (flag)
			{
				continue;
			}
			else break;
		}
		else if (sum == 2 || sum == 3|| sum==12)
		{
			cout << "you loss" << endl;
			flag = checkblock();
			if (flag)
			{
				continue;
			}
			else break;
		}
		else if (sum == 4 || sum == 5 || sum == 6 || sum == 8 || sum == 9 || sum == 10)
		{
			flag=checkblock();
			if (flag)
			{
				while (1)
				{
					int sum1 = 0,dc3,dc4;
					dc3 = f.playdice1();
					dc4 = f.playdice2();
					sum1 = dc3 + dc4;
					cout << dc3 << "," << dc4 << "," << sum1 << endl;
					if (sum == sum1)
					{
						cout << "you win" << endl;
						break;
					}
					else if (sum1 == 7)
					{
						cout << "you loss" << endl;
						break;
					}
					else
					{
						flag = checkblock();
						if (flag)
						{
							continue;
						}
						else break;
					}
					
				}
			}

		}
		cout << "----------------------------------------------------------------------------------" << endl;
	}
	system("pause");
    return 0;
}

