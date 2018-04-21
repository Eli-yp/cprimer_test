#include<iostream>
#include<initializer_list>

using namespace std;

//编写函数，求参数是initializer_list<int>类型的对象，计算所有元素的和
int sum(initializer_list<int> l)
{
	int s = 0;
	//球和，注意l.begin() 和 l.end()都是指针类型
	for (auto beg = l.begin(); beg != l.end(); ++beg)
	{
		s += *beg;	//故对其解引用才是它的对象的值
	}

	return s;
}

int main()
{
	int s;
	initializer_list<int> t{1,2,3,4,5,6,7,8,9,10};	//初始话initializer_list对象
	s = sum(t);
	cout << s << endl;

	return 0;
}

