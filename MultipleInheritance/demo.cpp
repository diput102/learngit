#include<iostream>
#include<stdlib.h>
#include"MigrantWorker.h"
using namespace std;
/*
��̳�
Ҫ��1��Farmer�� ���ݳ�Ա��m_strName ��Ա���������캯��������������sow����
    2��Worker�� ���ݳ�Ա��m_strCode ��Ա���������캯��������������carry����
	3��MigrantWorker�� ���ݳ�Ա���� ��Ա���������캯������������
*/


int main(void)
{
	MigrantWorker *p = new MigrantWorker("Merry", "100");
	p->carry();
	p->sow();
	delete p;
	p = NULL;
	system("pause");
	return 0;
}