#include<stdlib.h>
#include<iostream>
#include"Line.h"
using namespace std;
/*�����Ա
Ҫ��
���������ࣻ
�����ࣺCoordiante����
���ݳ�Ա��m_iX��m_iY
��Ա���������캯�����������������ݷ�װ����
�߶��ࣺLine����
���ݳ�Ա����A m_coorA����B m_coorB
��Ա���������캯�����������������ݷ�װ����
*/
int main(void)
{
	Line *p = new Line(1,2,3,4);
	p->printInfo();
	delete p;
	system("pause");
	return 0;
}