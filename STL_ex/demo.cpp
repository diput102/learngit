#include<iostream>
#include<stdlib.h>
#include<vector>
#include<list>
#include<map>
#include<string>
using namespace std;
int main(void)
{
	/*vector<int> vec;
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(6);*/
	/*vec.pop_back();
	cout << vec.size() << endl;*/
	/*for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}*/
	//vector<int>::iterator itor = vec.begin();
	//cout << *itor << endl;
	/*for (; itor!=vec.end(); itor++)
	{
		cout << *itor << endl;
	}
	cout << vec.front() << endl;
	cout << vec.back() << endl;*/

	map<string, string>m;
	pair<string, string>p1("H", "hello");
	pair<string, string>p2("W", "world");
	pair<string, string>p3("B", "beijing");
	m.insert(p1);
	m.insert(p2);
	m.insert(p3);

	//cout << m[3] << endl;
	//cout << m[6] << endl;

	map<string, string>::iterator itor = m.begin();
	for (; itor != m.end(); itor++)
	{
		cout<<itor->first << endl;
		cout << itor->second << endl;
	}
	system("pause");
	return 0;
}