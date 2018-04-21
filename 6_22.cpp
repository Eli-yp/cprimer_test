#include<iostream>

using namespace std;

int swap(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main()
{
	int d1, d2;
	cin >> d1 >> d2;
	cout << "d1的值是:" << d1 << endl;
	cout << "d2的值是:" << d2 << endl;
	swap(&d1, &d2); //注意这里要加&符号
	cout << "交换后d1的值是:" << d1 << endl;
	cout << "交换后d2的值是:" << d2 << endl;

	return 0;
}


