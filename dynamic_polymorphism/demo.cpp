#include<iostream>
#include<stdlib.h>
#include"Circle.h"
#include"Rect.h"
/*��̬��̬���麯��
Ҫ��
1������Shape�࣬��Ա������calcArea���������캯������������
2������Rect�࣬��Ա������calcArea���������캯������������
���ݳ�Ա��m_dWidth��m_dHeight
3������Circle�࣬��Ա������calcArea���������캯������������
���ݳ�Ա��m_dR

*/
int main(void)
{
	Shape *shape1 = new Rect(3, 4);
	Shape *shape2 = new Circle(6);

	shape1->calcArea();
	shape2->calcArea();
	delete shape1;
	shape1 = NULL;
	delete shape2;
	shape2 = NULL;
	system("pause");
	return 0;
}