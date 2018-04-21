#include<iostream>
#include<vector>
#include<string>

using namespace std;

void f()
{
	cout << "f()" << endl;
}

void f(int) 
{
	cout << "f(int)" << endl;
}

void f(int, int)
{
	cout << "f(int, int)" << endl;
}

void f(double, double = 3.14)
{
	cout << "f(double, double = 3.14)" << endl;
}

int main()
{
//	f(2.56, 42);		//将产生二义性错误
	f(42);				//调用f（int）
	f(42, 0);			//调用f（int， int）
	f(2.56, 3.14);		//调用f（double. double)

	return 0;
}
