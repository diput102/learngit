#include"Coordinate.h"
#include<iostream>
using namespace std;

int main(void)
{
	Coordinate coor1(1, 3);
	/*Coordinate coor2(2, 4);
	Coordinate coor3(0, 0);*/
	/*coor3 = coor1 + coor2;
	cout << coor3 << endl;*/
	cout << coor1.getX() << "," << coor1.getY() << endl;
	//-(-coor1);//coor1.operator-();
	//cout << coor1.getX() << "," << coor1.getY() << endl;
	++coor1;
	cout << coor1.getX() << "," << coor1.getY() << endl;
	cout << (coor1++).getX() << ",";
	cout << (coor1++).getY() << endl;
	cout << coor1.getX() << "," << coor1.getY() << endl;
	system("pause");
	return 0;
}