#include<iostream>
#include<stdlib.h>
#include"Array.h"
using namespace std;
/*
ʾ��Ҫ��
����һ��Array�ࡣ
���ݳ�Ա��m_len��ʾ���鳤��
��Ա������
   ���캯��
   ��������
   len�ķ�װ����
   ��Ϣ�������printInto
*/
int main(void)
{
	Array arr1(10);
	arr1.printInfo()->setLen(5)->printInfo();
	cout << &arr1 << endl;
	system("pause");
	return 0;
}