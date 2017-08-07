
#include<iostream>
#include<stdlib.h>
#include "Soldier.h"
using namespace std;
/*
公有继承：isA
要求：定义函数test1（Person p） test2（Person &p）test3（Person *P）
*/
void test1(Person p)
{
	p.play();

}
void test2(Person &p)
{
	p.play();

}
void test3(Person *p)
{
	p->play();

}
int main(void)
{
	Soldier soldier;
	Person p=soldier;
	p.play();
	cout << endl;

	Person *p1 = &soldier;
	p1->play();
	//p1->work();error:无法调用子类成员函数
	cout << endl;

	Person *p2 = new Soldier;
	p2->play();
	delete p2;
	p2 = NULL;
	cout << endl;

	Person p3;
	Soldier s;

	test1(p3);
	test1(s);
	cout << endl;

	test2(p3);
	test2(s);
	cout << endl;

	test3(&p3);
	test3(&s);
	cout << endl;
	system("pause");
	return 0;
}