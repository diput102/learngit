/*********************************
*   ���ڣ�2017-09-20
Լ����Ϊ�ַ����������ȵ���������������ĸ��������֮�͡�ÿ����ĸ�������ȿ������������䣬��ͬ��ĸ�������Ȳ�ͬ���ֱ��Ӧһ��1-26֮���������

Լ�����ں���ĸ��Сд����Ҳ����˵��ĸF��f������������ͬ������һ���ַ�����������������ܵ������ȡ����磺dad������Խ�26�����d��25�����a�����������ַ���������Ϊ77��

������ �����򲻵�ʽ�����ִ���������ĸ��ȻӦ�ø�26�����������Ŀ�����ͳ��ÿ����ĸ���ֵĴ����ˣ�Ȼ���ճ��ִ����Ӵ�С�����η���Ӹߵ��͵�Ȩֵ������������ص�̰��˼�롣
����
����һ���ַ���S(S�ĳ��� <= 10000)��S��û�г���ĸ��������ַ���
���
���㽫1-26�������ͬ����ĸ��ʹ���ַ���S����������������������ȡ�
����ʾ��
dad
���ʾ��
77
**********************************/
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int cmp(const void*a, const void*b)
{
	return *(int*)b - *(int*)a;
}

int perfect(const string &s) {
	int i;
	int len = s.size();
	int count[26] = { 0 };
	//ͳ����ĸ����
	for (i = 0; i < len; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			count[s[i] - 'A'] ++;
		}
		else if (s[i] >= 'a' && s[i] <= 'z') {
			count[s[i] - 'a'] ++;
		}
	}
	//�Ӵ�С����
	qsort(count, 26, sizeof(count[0]), cmp);
	int perfectDegree = 26;
	int sum = 0;
	//����������
	for (i = 0; i < 26; i++) {
		sum += count[i] * perfectDegree;
		perfectDegree--;
	}
	return sum;
}

int main()
{
	/*int i, n;*/
	string str;
	while (cin >> str) {
		printf("%d\n", perfect(str));
	}
	return 0;
}