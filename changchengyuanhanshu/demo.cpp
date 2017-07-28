#include<stdlib.h>
#include<iostream>
#include"Line.h"
using namespace std;

int main(void)
{
	const Line line(1, 2, 3, 4);
	line.printInfo();
	system("pause");
	return 0;
}