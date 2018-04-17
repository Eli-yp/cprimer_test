#include<iostream>
#include<vector>
#include<cstddef>
#include<cctype>

using namespace std;

int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	//vector<int> v(begin(a), end(a));		//使用数组直接初始化vector

	//使用赋值操作
	vector<int> v(10);	//注意这里要给定长度，不然会出错
	for (size_t i = 0; i < 10; ++i)
	{
		v[i] = a[i];					//使用赋值操作
		cout << v[i] << " ";
	}

	/*
	//使用添加操作
	vector<int> v;
	for (size_t i = 0; i < 10; ++i)
	{
		v.push_back(a[i]);				//使用数组进行添加操作
		cout << v[i] << " ";
	}
	*/

	cout << endl;

	return 0;
}
