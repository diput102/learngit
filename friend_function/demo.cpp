#include<iostream>
#include<stdlib.h>
#include"Time.h"
#include"Match.h"
using namespace std;
/*
友元函数
1、友元全局函数
2友元成员函数
*/
//void printTime(Time &t);

int main(void)
{
	Time t(6, 34, 25);
	Match m;
	m.printTime(t);
	system("pause");
	return 0;
}

//void printTime(Time &t)
//{
//	cout << t.m_iHour <<":"<< t.m_iMinute <<":"<< t.m_iSecond << endl;
//}

