#include<iostream>
#include "Line.h"
using namespace std;
Line::Line(int x1, int y1, int x2, int y2,int x3,int y3)
{
	
	m_pCoorA = new Coordinate(x1, y1);//实例化coordinate对象
	m_pCoorB = new Coordinate(x2, y2);
	m_pCoorC = new Coordinate(x3, y3);

	cout << "Line()" << endl;
}
Line::~Line()
{
	
	delete m_pCoorA;
	m_pCoorA = NULL;
	delete m_pCoorB;
	m_pCoorB = NULL;
	delete m_pCoorC;
	m_pCoorC = NULL;
	cout << "~Line()" << endl;
}
void Line::printInto()
{
	cout << "printInto()" << endl;
	cout << "(" << m_pCoorA->getX() << "," << m_pCoorA->getY() << ")" << endl;
	cout << "(" << m_pCoorB->getX() << "," << m_pCoorB->getY() << ")" << endl;
}