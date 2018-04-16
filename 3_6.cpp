//把字符串的值改为X代替

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	cin >> s;	//输入字符串
	for (auto &c : s)	//用引用来修改字符串的值
		c = 'X';
	cout << s << endl;

	return 0;
}
