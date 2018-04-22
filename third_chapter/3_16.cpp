//编写程序cin输入整数并加入vector，输出vector对象

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{

	/*
	//输入的是整数
	int d;
	vector<int> z;
	while (cin >> d)	// 输入整数
	{
		z.push_back(d);		//将整数添加到vector里面
	}
	for (auto a : z)	//遍历vector
		cout << a << " ";	//输出其中的内容
	cout << endl;
	*/

	//输入的是字符串
	string s;
	vector<string> v;
	
	while (cin >> s)		//输入字符串
		v.push_back(s);		//添加到vector
	
	/*
	//用getline()
	while (getline(cin ,s))		//用getline输入
		v.push_back(s);
	*/
	for (auto a : v)	//遍历vector
		cout << a << " ";
	cout << endl;

	return 0;
}
