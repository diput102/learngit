#include"Coordinate.h"
class Line
{
public:
	Line(int x1,int y1,int x2,int y2,int x3,int y3);
	~Line();
	void printInto();
private:
	Coordinate *m_pCoorA;//坐标类对象指针
	Coordinate *m_pCoorB;
	Coordinate *m_pCoorC;

};