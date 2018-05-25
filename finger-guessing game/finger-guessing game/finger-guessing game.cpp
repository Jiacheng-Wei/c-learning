// finger-guessing game.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "computer.h"
#include "user.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int judger(int i, char j)
{
	if (i == 0 && (j == 'a' || j == 'A') || (i == 1 && (j == 'b' || j == 'B')) || (i == 2 && (j == 'c' || j == 'C')))
	{
		return 0;
	}
	if (i == 0 && (j == 'b' || j == 'B') || (i == 1 && (j == 'c' || j == 'C')) || (i == 2 && (j == 'a' || j == 'A')))
	{
		
		return 1;
	}
	if (i == 0 && (j == 'c' || j == 'C') || (i == 1 && (j == 'a' || j == 'A')) || (i == 2 && (j == 'b' || j == 'B')))
	{
		return 2;
	}
}


int main()
{
	cout << "----------------------welcome to finger-guessing game----------------------" << endl;
	user player;
	computer cplayer;
	int count = 0, wincount = 0, losscount = 0;
	int flag;
	char p;
	int cp;
	char t,a;
	while (1)
	{
		player.instruction();
		p=player.getuserchoice();
		cp=cplayer.getcomputerchoice();
		cplayer.Print();
		flag= judger(cp,p);
		if (flag == 0)
		{
			cout << "break even" << endl;
		}
		if (flag == 1)
		{
			cout << "congratulation you win " << endl;
			wincount++;
		}
		if (flag == 2)
		{
			cout << "sorry you loss" << endl;
			losscount++;
		}
		count++;
		cout << "按T键显示积分榜，按其他任意键跳过。" << endl;
		cin >> t;
		if (t == 'T' || t == 't') {
			cout << "共进行了" << count << "场比赛" << endl;
			cout << "您的胜场：" << wincount << endl;
			cout << "您的对手的胜场：" << losscount<< endl;
		}
		cout << "按Q键退出游戏，按其他任意键继续游戏。" << endl;
		cin >> a;
		if (a == 'Q' || a == 'q') { break; }
		cout << "--------------------------------------------------------------------------" << endl;

	}
	system("pause");
    return 0;
}

