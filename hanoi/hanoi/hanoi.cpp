// hanoi.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include<stdio.h>
#include <stdlib.h>
/*int main()
{
	void hanoi(int n, char one, char two, char three);
	int m;
	printf("input the number of disk:");
	scanf_s("%d", &m);
	printf("The step to move %d diskes:\n", m);
	hanoi(m, 'A', 'B', 'C');
	system("pause");
}
void hanoi(int n, char one, char two, char three)
{
	void move(char x, char y);
	if (n == 1)
		move(one, three);
	else
	{
		hanoi(n - 1, one, three, two);
		move(one, three);
		hanoi(n - 1, two, one, three);
	}
}
void move(char x, char y)
{
	printf("%c-->%c\n", x, y);
}*/



void move(char x, char y)
{
	printf("%c-->%c\n", x, y);
}
void hanoi(int n, char one, char two, char three)
{

	if (n == 1)
		move(one, three);
	else
	{
		hanoi(n - 1, one, three, two);//记住这里不能写成hanoi(n - 1, one, two, three);
		move(one, three);
		hanoi(n - 1, two, one, three);
	}
}
int main()
{
	int m;
	printf("input m:");
	scanf_s("%d", &m);
	hanoi(m, 'A', 'B', 'C');
	system("pause");
}


