#include<iostream>
#include<stdlib.h>
#include"Array.h"
using namespace std;
/*
示例安排：
1.定义一个Array类，数据成员为m_iCount
成员函数为数据封装函数、构造函数、拷贝
构造函数、析构函数——浅拷贝
2.增加数据成员m_pArr，并增加m_pArr地址
查看函数，同时改造构造函数、拷贝构造函
数和析构函数——深拷贝
*/
int main(void)
{
	Array arr1(5);
	Array arr2(arr1);
	//arr1.printAddr();
	//arr2.printAddr();
	arr1.printArr();
	arr2.printArr();
	system("pause");
	return 0;
}