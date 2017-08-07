#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
	Person(string name = "Jim");
	virtual ~Person();//虚析构函数 将子类对象完全释放掉
	void play();
protected:
	string m_strName;
};