#include<iostream>
#include"Person.h"
#include<string>
using namespace std;
class Soldier:public Person
{
public:
	Soldier(string name = "James", int age = 20);
	~Soldier();
	void work();
protected:
	int m_iAge;
};