// filepractice.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;
//跳过空格只输出字符
/*char GetChar(istream&in = cin)
{
	char ch;
	while (!in.eof() && (ch = in.get()) == ' ');
	return ch;
}
int main()
{
	char ch;
	cout << "please enter a line of charactor" << endl;
	ch = GetChar();
	while (ch != '\n'&&ch != EOF)
	//for(int i=0;i<10;i++)通过这一步验证了系统将输入流中的数据先存入缓存中，再用in.get()一个一个字符读出来
	{
		cout.put(ch);
		ch = GetChar();
	}
	cout << endl;
	system("pause");
	return 0;
}*/

/*char GetChar(istream&in = cin)
{
	char ch;
	while (in.peek() != EOF && (ch = in.get()) == ' ');
	return ch;
}

int main()
{
	char ch;
	double x;

	ch = GetChar();
	while (ch != '\n'&&ch != EOF)
		//for(int i=0;i<2&& ch != '\n'&&ch != EOF;i++)通过这一步验证了系统将输入流中的数据先存入缓存中，再用in.get()一个一个字符读出来
	{
	{
		if (ch >= '0'&&ch <= '9')
		{
			cin.putback(ch);
			cin>>x;
			cout << x << " ";
		}
		else
		{
			//非法字符
			cout << "出现非法字符！" << endl;
			//exit(1);
		}
		ch = GetChar();
	}
	cout << endl;
	system("pause");
	return 0;
}*/

int main()
{
	char s[318], fName[20];
	ifstream f;
	cout << "please enter the file's name" << endl;
	cin >> fName;
	f.open(fName);
	if (f.fail())
	{
		cout << "fail to open the fail" << endl;
		exit(1);
	}
	f.getline(s, 318);
	while (!f.eof())
	{
		cout << s << endl;
		f.getline(s, 318);
	}
	f.close();

	system("pause");
	return 0;
}
