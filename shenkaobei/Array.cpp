#include"Array.h"
#include<iostream>
using namespace std;
Array::Array(int count) :m_iCount(count)
{
	m_pArr = new int[m_iCount];//在构造函数中申请了这段内存
	for (int i = 0; i < m_iCount; i++)
	{
		m_pArr[i] = i;
	}
	cout << "Array" << endl;

}
Array::Array(const Array&arr)
{
	m_iCount = arr.m_iCount;
	//m_pArr = arr.m_pArr;//浅拷贝
	m_pArr = new int[m_iCount];
	for (int i = 0; i < m_iCount; i++)
	{
		m_pArr[i] = arr.m_pArr[i];
	}//深拷贝：1.先申请一段内存；2.将传入对象的对应内存拷贝到申请的内存中去
	
	cout << "Array&" << endl;

}
Array::~Array()
{
	delete[]m_pArr;//在析构函数中释放内存
	m_pArr = NULL;
	cout << "~Array" << endl;
}
void Array::setCount(int count)
{
	m_iCount = count;
}
int Array::getCount()
{
	return m_iCount;
}
void Array::printAddr()
{
	cout << "m_pArr的值是" << m_pArr << endl;
}
void Array::printArr()
{
	for (int i = 0; i < m_iCount; i++)
	{
		cout << m_pArr[i] << endl;
	}
}