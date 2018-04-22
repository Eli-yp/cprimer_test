//将包含标点符号的字符串中的标点符号去掉在输出剩下的

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	cin >> s;	//读入一个包含标点符号的字符串

	//第一种方法
	string r;	//定义一个空串
	for (auto &c : s)
		if (!ispunct(c))	//如果c不是标调符号，就添加到r
			r += c;
	cout << r << endl;
	
	/*
	//或者
	for (decltype(s.size()) i = 0; i != s.size(); ++i)
		if (!ispunct(s[i]))		//如果s[i]不是标点符号，就输出
			cout << s[i];
	cout << endl;
	*/

	return 0;
}
