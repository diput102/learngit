#include<iostream>
#include<stdlib.h>
#include"Line.h"
using namespace std;
/*����ָ���Ա
Ҫ��
          ���������ࣺ
		  �����ࣺCoordinate
		  ���ݳ�Ա��������m_iX��������m_iY��
		  ��Ա���������캯�����������������ݷ�װ������
		  �߶��ࣺLine
		  ���ݳ�Ա����Aָ��m_pCoorA����Bָ��m_pCoorB
		  ��Ա���������캯����������������Ϣ��ӡ����

*/
int main(void)
{
	Line *p = new Line(1, 2, 3, 4,5,6);
	p->printInto();
	delete p;
	p = NULL;
	cout << sizeof(p) << endl;
	cout << sizeof(Line) << endl;
	cout << sizeof(int) << endl;
	system("pause");
	return 0;
}