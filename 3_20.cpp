//读取一组整数存入vector,整数求和

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	
	//将vector里面每对相邻的整数的和输出
	int d;		//定义整数
	vector<int> v;	//定义容器vector，用来存放输入的整数
	vector<int> r;	//定义vector，用来存放两整数相加的和
	while (cin >> d)
		v.push_back(d);		//将输入的整数添加到容器v
	for (decltype(v.size()) i = 0; i != v.size() - 1; ++i)  //这里减1是不把最后一个输出来
	{
		r.push_back(v[i] + v[i+1]);	//将容器两相邻的整数求和放在容器r
	}
	for (auto a : r)	//遍历r，输出相加的和
		cout << a << " ";
	cout << endl;
	
	/*
	//先输出第一个和最后一个，再输出第二个和倒第二个，依次类推
	int d;
	vector<int> v;
	vector<int> r(v.size());
	while (cin >> d)
		v.push_back(d);
	for (decltype(v.size()) i = 0; i != v.size() / 2; ++i)  //注意这里是除以2
	{
		r.push_back(v[i] + v[v.size()-1-i]);	//输出第一个和最后一个，依次类推
	}
	for (auto a : r)
		cout << a << " ";
	cout << endl;
	*/
	
	return 0;
}

