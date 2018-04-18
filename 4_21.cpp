//用条件表达式找到奇数并将之翻倍

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> v{1,2,3,4,5,6,7,8,9};	//初始化vector
	for (decltype(v.size()) i = 0; i != v.size(); ++i)
		cout << v[i] << " ";		//先输出原来的vector
	cout << endl;
	for (decltype(v.size()) i = 0; i != v.size(); ++i)
	{
		v[i] = (v[i] % 2 == 0) ? v[i] : (2 * v[i]);		//判断是否为奇数，是奇数则将其值翻倍
		cout << v[i] << " ";		//输出改变后的vector
	}
	cout << endl;

	return 0;
}
