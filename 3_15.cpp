//cin读入字符串并存入vector对象

#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	string s;	//定义字符串
	vector<string> v;	//定义容器
	while (cin >> s)
	{
		v.push_back(s);
	}

	return 0;
}
