//创建含有10个整数的vector对象。用迭代器将所有元素的值变为两倍再输出

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	/*
	//这里是自定义输入10个数
	int d;
	int i = 0;
	vector<int> v;
	while(i < 10)
	{
		cin >> d;		//输入数字
		v.push_back(d);		//将其添加到vector
		++i;
	}
	*/

	//直接初始化10个整数的vector对象
	vector<int> v{1,2,3,4,5,6,7,8,9,10};


	//用迭代的方式输出整数的两倍
	for(auto t = v.begin(); t != v.end(); ++t)
	{
		*t = *t * 2;   //令迭代器所指元素变成两倍
		cout << *t << " ";		//输出
	}

	/*	
	//以下直接用vector处理
	for (auto &i : v)		//遍历vector，对其中的元素进行改变，使其值变成原来的两倍，记得加了引用
		i = i * 2;
	for (auto i : v)
		cout << i << " ";	//遍历vector ，输出
	*/

	cout << endl;

	return 0;
}
