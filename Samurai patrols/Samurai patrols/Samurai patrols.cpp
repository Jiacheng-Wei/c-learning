// Samurai patrols.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int imove[] = { 2,1,-1,-2,-2,-1,1,2 };//定义横轴要走的方向
int jmove[] = { 1,2,2,1,-1,-2,-2,-1 };//定义纵轴要走的方向
int n;//初始化棋盘阶数
int x, y;//起点
int board[1000][1000];//定义棋盘的最大规模


void initarrAndpos() //初始化数组和位置
{
	cout << "please enter the square of chessboard(n>3)" << endl;
	cin >> n;
	while (n <= 3)
	{
		cout << "please enter the square of chessboard again(n>3)" << endl;
		cin >> n;
	}
	cout << "please enter the start position number" << endl;
	cout << "enter x" << endl;
	cin >> x;
	while (x < 1 || x > n)
	{
		cout << "the number is wrong please enter the x again(1--n)" << endl;
		cin >> x;
		continue;
	}
	cout << "enter y" << endl;
	cin >> y;
	while (y<1 || y>n)
	{
		cout << "the number is wrong please enter the y again(1--n)" << endl;
		cin >> n;
		continue;
	}
}

int exitnum(int i, int j, int s, int a[]) //计算在（i，j)位置的武士的出口数
{
	int inext, jnext;
	int	count=0, k=0;
	for (k; k < 8; k++)
	{
		inext = i + imove[(s + k) % 8];
		jnext = j + jmove[(s + k) % 8];
		if (jnext>=0&&jnext<n&&inext>=0&&inext<n&&board[inext][jnext]==0)
		a[count++] = (s + k) % 8;
	}
	return count;
}

int nextstep(int i, int j, int s) //执行下一步并判断下一步出口数最少的方向
{
	int c, ns, temp;
	int *b = new int[n];
	int *a = new int[n];
	int min = n + 1, k = 0;
	c = exitnum(i, j, s, a);
	if (c == 0)
	{
		return -1;
	}
	for (k; k < c; k++)
	{
		temp = exitnum(i + imove[a[k]], j + jmove[a[k]], s, b);
		if (temp < min)
		{
			min = temp;
			ns = a[k];
		}
	}
	return ns;
}

bool renewgame() //判断是否继续游戏
{
	cout << "would you want to restart the game(Y/N)" << endl;
	char choice;
	cin >> choice;
	if (choice == 'Y' || choice == 'y') return true;
	else return false;
}

int main()
{
	cout << "-------------------武士巡逻问题-------------------" << endl;
	cout << "本系统支持阶数大于三的棋盘大小" << endl;
	int step,no; //定义step是每一个点的遍历顺序，定义no是每一个点的出口数
	while (1)
	{
		int start = 0;//顺序选择出口的初始值
		initarrAndpos();
		do 
		{
			int ix = x, iy = y;//初始化起始坐标
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					board[i][j] = 0;//初始化棋盘未走过之处置为0
				}
			}
			board[x][y] = 1;//将走过的地方置为1
			for (step = 2; step <= n*n; step++)//循环是为了记录棋盘每一个点遍历的顺序
			{
				no = nextstep(x, y, start);
				if (no == -1)//判断是否有出口
					break;
				x = x + imove[no];
				y = y + jmove[no];
				board[x][y] = step;
			}
			if (step > n*n)
			{
				cout << "以("<<ix<<","<<iy<<")为起点遍历成功" << endl;
				for (int i = 0; i < n; i++)
				{
					for (int j = 0; j < n; j++)
					{
						cout << "-" << board[i][j];
					}
					cout << "-" << endl;
				}
			}
			start++;
		} while (start<8&&step<=n*n);

		if (step <=n * n)//如果不存在这样一条路径就提示玩家
		{
			cout << "不存在一条路径是武士能巡逻完整个棋盘" << endl;
		}
		
		bool flag = renewgame();//判断是否继续进行游戏
		if (flag) continue;
		else break;
	}
	system("pasue");
	return 0;
}

