#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
	Person(string name = "Jim");
	virtual ~Person();//���������� �����������ȫ�ͷŵ�
	void play();
protected:
	string m_strName;
};