#ifndef PLANE_H
#define PLANE_H
#include"Flyable.h"
#include<string>
using namespace std;
class Plane 
{
public:
	Plane(string code);
	/*virtual void takeoff();
	virtual void land();*/
	void printCode();
protected:
	string m_strCode;
};
#endif