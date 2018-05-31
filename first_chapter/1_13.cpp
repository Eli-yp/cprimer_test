#include<iostream>

using namespace std;

int main()
{
	//for循环计算50到100的和
	int sum = 0;
	for(int i = 50; i <= 100; ++i)
	{
		sum += i;
	}
	cout << sum<< endl;

	//for循环递减打印10到0之间的整数
	for(int val = 10; val >= 0; --val)
		cout << val << " ";
	cout << endl;

	//输入两个整数，打印两个整数之间的数
	cout << "Enter two numbers:" << endl;
	int v1 = 0, v2 = 0;
	cin >> v1 >> v2;
	for(int i = v1; i <= v2; i++)
		cout << i << " " ;
	cout << endl;

	return 0;
}
