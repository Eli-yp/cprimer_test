#include<iostream>
#include<cctype>
#include<cstddef>
#include<iterator>

using namespace std;

int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};

	/*
	//1,使用for循环加迭代 ，以及auto关键字
	for(auto t = begin(a); t != end(a); ++t)
		cout << *t << " ";
	*/

	/*
	//2使用遍历for循环
	for (auto c : a)
		cout << c << " ";
	*/

	//3使用普通for循环
	for(size_t i = 0; i < 10; ++i)
		cout << a[i] << " ";

	cout << endl;

	return 0;
}
