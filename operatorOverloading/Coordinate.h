#ifndef COORDINATE_H
#define COORDINATE_H
#include<iostream>
using namespace std;

class Coordinate
{
public:
    /*Coordinate operator+(Coordinate &c);*/
	//friend Coordinate operator+(Coordinate c1, Coordinate c2);
	/*friend ostream &operator<<(ostream &output, Coordinate &coor);*/
	Coordinate(int x,int y);
	int getX();
	int getY();
	//Coordinate &operator-();
	Coordinate operator++(int);
	Coordinate &operator++();
	//friend Coordinate &operator-(Coordinate &c);
private:
	int m_iX;
	int m_iY;

};
#endif