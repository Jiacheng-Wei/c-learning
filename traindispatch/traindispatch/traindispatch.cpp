// traindispatch.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <deque>
#include <stack>
#include <queue>
using namespace std;

bool TrainJudge(int a[], int  n)
{
	int i;
	queue<int>inq;
	stack<int>s;

	for (int i = 1; i <=n; i++)
	{
		inq.push(i);
	}
	for (int i = 0; i <n; i++)
	{	//dispatch a[i]
		if (a[i]<1 || a[i]>n)
		{	//dispatch the train between 1 to n
			cout << "待调度的车辆号应在1~" << n << "之间" << endl;
			return false;
		}
		else if (!s.empty() && a[i] == s.top())
		{	//待调度的列车就在栈顶
			cout << s.top() << "号列车出站" << endl;
			s.pop();
		}
		else if (!inq.empty() && a[i] >= inq.front())
		{	//待调度的列车在车站队列inq中
			while (!inq.empty() && a[i] >= inq.front())
			{	//进站
				s.push(inq.front());
				cout << inq.front() << "号列车进站" << endl;
				inq.pop();
			}
			cout << s.top() << "号列车出站" << endl;
			s.pop();
		}
		else
		{
			//a[i]不在s栈顶，而s在栈中间，无法出栈
			cout << "调度不能实现" << endl;
			return false;
		}
	}
	return true;
}

int main()
{
	int *a, i, n = 6;
	char select;
	do
	{
		cout << "输入列车数" << endl;
		cin >> n;
		a = new int[n];
		cout << "输入调度的列车号" << endl;
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		if (TrainJudge(a, n))
		{
			cout << "success" << endl;
		}
		else
		{
			cout << "fail" << endl;
		}
		delete []a;
		cout << "continue?(Y/N)" << endl;
		cin >> select;
	} while (select =='Y' || select == 'y');

	system("pause");
	return 0;
}

