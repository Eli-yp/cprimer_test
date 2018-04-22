#include<iostream>
#include<cstddef>

using namespace std;

int main()
{
	int a[10] = {0,1,2,3,4,5,6,7,8,9};	//定义数组
	int *p = a;		//令指针P指向a的第一个元素
	for(size_t i = 0; i < 10; ++i)
	{
		cout << a[i] << " ";		//先输出原来a的值
	}
	cout << endl;

	for(size_t i = 0; i < 10; ++i)
	{
		*(p+i) = 0;		//将数组a的值变为0；
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}

