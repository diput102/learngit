#include"Person.h"
#include<iostream>
using namespace std;
Person::Person()
{
	m_strName = "Marry";
}
void Person::paly()
{
	cout << "Person::paly()" << endl;
	cout << m_strName << endl;
}