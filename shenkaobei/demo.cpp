#include<iostream>
#include<stdlib.h>
#include"Array.h"
using namespace std;
/*
ʾ�����ţ�
1.����һ��Array�࣬���ݳ�ԱΪm_iCount
��Ա����Ϊ���ݷ�װ���������캯��������
���캯����������������ǳ����
2.�������ݳ�Աm_pArr��������m_pArr��ַ
�鿴������ͬʱ���칹�캯�����������캯
�������������������
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