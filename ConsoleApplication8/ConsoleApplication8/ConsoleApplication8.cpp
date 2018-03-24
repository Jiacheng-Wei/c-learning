// ConsoleApplication8.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

class student 
{
public:
	void setName(string _name)
	{
		m_strName = _name;
	}
	string getName()
	{
		return m_strName;
	}
	void setGender(string _gender)
	{
		m_strGender = _gender;
	}
	string  getGender()
	{
		return m_strGender;
	}
	void initScore()
	{
		m_iScore = 0;
	}
	int getScore()
	{
		return m_iScore;
	}
	void study(int score)
	{
		m_iScore += score;
	}


private:
	string m_strName;
	string m_strGender;
	int m_iScore;
};


int main()
{
	student stu;
	stu.setName("zhangsan");
	stu.setGender("女");
	stu.initScore();
	stu.study(67);
	stu.study(30);
	cout << stu.getName() << "," << stu.getGender() << "," << stu.getScore() << endl;
	system("pause");
	return 0;
}

