#include"Coordinate.h"

Coordinate::Coordinate(int x, int y)
{
	m_iX = x;
	m_iY = y;
}
int Coordinate::getX()
{
	return m_iX;
}
int Coordinate::getY()
{
	return m_iY;
}
//Coordinate &Coordinate::operator-()
//{
//	this->m_iX = -this->m_iX;
//	this->m_iY = -this->m_iY;
//	return *this;
//}
Coordinate &Coordinate::operator++()
{
	m_iX = m_iX + 1;
	m_iY = m_iY + 1;
	return *this;
}
Coordinate Coordinate::operator++(int)
{
	Coordinate old(*this);
	this->m_iX++;
	this->m_iY++;
	return old;
}
//Coordinate &operator-(Coordinate &c)
//{
//	c.m_iX = -c.m_iX;
//	c.m_iY = -c.m_iY;
//	return c;
//}

