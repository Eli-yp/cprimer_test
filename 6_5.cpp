#include<iostream>

using namespace std;

double the_abs(double n)
{
	if (n < 0)
		n = -n;		//求负数的绝对值
	return n;
}

int main()
{
	double d;
	cin >> d;		
	double r;
	r = the_abs(d);			//调用函数求绝对值
	cout << d << "的绝对值是 " << r << endl;

	return 0;
}
	
