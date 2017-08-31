#ifndef TANK_H
#define TANK_H
#include<stdlib.h>
#include<string>
using namespace std;
class Tank
{
public:
	Tank(string code);
	~Tank();
	void fire();
	static int getCount();
private:
	string m_cCode;
	static int s_iCount;

};
#endif