#include"Coordinate.h"
#include<iostream>
using namespace std;
Coordinate::Coordinate(int x, int y)
{
	m_iX = x;
	m_iY = y;
	cout << "Coordinate()" << endl;
}
Coordinate::~Coordinate()
{
	cout << "~Coordinate()" << endl;
}