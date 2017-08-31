#include"Tank.h"
#include<stdlib.h>
#include<iostream>
using namespace std;

int main(void)
{
	Tank *p = new Tank("A");
	cout<<Tank::getCount()<<endl;
	Tank *q = new Tank("B");
	cout << q->getCount() << endl;
	delete p;
	delete q;
	cout << Tank::getCount() << endl;
	system("pause");
	return 0;
}