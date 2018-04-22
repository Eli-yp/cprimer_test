//用迭代器将存有一组整数的vector对象相邻两个数相加输出，第一个会最后一个相加输出

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int d;	//定义整数
	vector<int> v;	//定义vector
	while( cin >> d)
		v.push_back(d);			//把输入的整数放vector对象里面

	/*
	//输出相邻连个数相加
	for(auto t = v.begin(); t != v.end() - 1; ++t)	//	对vector里面的对象遍历
	{
		cout << *t + *(t + 1) << " ";		//输出相邻两个数的和，最后一个不输出
	}
	cout << endl;
	*/

	//输出第一个与最后一个相加，依次类推
	auto b = v.begin();
	auto e = v.end();
	for (auto t = b; t != e; ++t)
	{
		e--;
		cout << *t + *(e) << " ";
	}
	cout << endl;

	return 0;
}

