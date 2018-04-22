//用cin读入一组整数并把它们存入一个vector对象

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int d;	//定义整数
	vector<int> z;	//定义vector对象
	while (cin >> d)	//cin读入整并且存入vector对象
	{
		z.push_back(d);
	}

	return 0;
}
