#include "stdafx.h"
#include "Worker.h"

Worker::Worker(string name)
{
	m_strname = name;
	cout << "Worker" << endl;
}
Worker::~Worker()
{
	cout << "~Worker" << endl;
}
void Worker::work()
{
	cout << m_strname << endl;
	cout << "work" << endl;
}