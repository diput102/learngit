#include<iostream>
#include<stdlib.h>
#include"IndexException.h"
using namespace std;
/*�쳣����
1������һ��Exception�� ��Ա������printException����������
2.����һ��IndexException�� ��Ա������printException����

*/
void test()
{
	throw IndexException();
}
int main(void) 
{
	try
	{
		test();
	}
	catch (IndexException &e)
	{
		e.printException();
	}
	system("pause");
	return 0;
}