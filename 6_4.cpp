#include<iostream>

using namespace std;

int fact(int n)
{
	int ret = 1;
	//求阶乘
	while ( n > 0)
	{
		ret = ret * n;	
		--n;
	}
	return ret;
}

int main()
{
	int d;
	cin >> d;	//输入一个整数
	int r;
	r = fact(d);	//调用函数求其阶乘
	cout << d << "的阶乘是 " << r << endl;

	return 0;
}
