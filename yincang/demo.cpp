#include<iostream>
#include<stdlib.h>
#include"Soldier.h"
using namespace std;
/*
�̳й�ϵ������
Ҫ��1.Person�࣬���ݳ�Ա��m_strName����Ա���������캯����play()
      2.Soldier�࣬���ݳ�Ա���ޣ���Ա���������캯����play������work����
*/
int main(void)
{
	Soldier soldier;
	
	soldier.work();
	soldier.play(7);
	
	soldier.Person::paly();
	system("pause");
	return 0;
}