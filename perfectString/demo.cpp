/*********************************
*   日期：2017-09-20
约翰认为字符串的完美度等于它里面所有字母的完美度之和。每个字母的完美度可以由你来分配，不同字母的完美度不同，分别对应一个1-26之间的整数。

约翰不在乎字母大小写。（也就是说字母F和f）的完美度相同。给定一个字符串，输出它的最大可能的完美度。例如：dad，你可以将26分配给d，25分配给a，这样整个字符串完美度为77。

分析： 由排序不等式，出现次数最多的字母显然应该给26。所以这个题目变成了统计每种字母出现的次数了，然后按照出现次数从大到小，依次分配从高到低的权值。这就是最朴素的贪心思想。
输入
输入一个字符串S(S的长度 <= 10000)，S中没有除字母外的其他字符。
输出
由你将1-26分配给不同的字母，使得字符串S的完美度最大，输出这个完美度。
输入示例
dad
输出示例
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
	//统计字母个数
	for (i = 0; i < len; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			count[s[i] - 'A'] ++;
		}
		else if (s[i] >= 'a' && s[i] <= 'z') {
			count[s[i] - 'a'] ++;
		}
	}
	//从大到小排序
	qsort(count, 26, sizeof(count[0]), cmp);
	int perfectDegree = 26;
	int sum = 0;
	//计算完美度
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