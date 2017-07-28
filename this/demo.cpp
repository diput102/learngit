#include<iostream>
#include<stdlib.h>
#include"Array.h"
using namespace std;
/*
示例要求：
定义一个Array类。
数据成员：m_len表示数组长度
成员函数：
   构造函数
   析构函数
   len的封装函数
   信息输出函数printInto
*/
int main(void)
{
	Array arr1(10);
	arr1.printInfo()->setLen(5)->printInfo();
	cout << &arr1 << endl;
	system("pause");
	return 0;
}