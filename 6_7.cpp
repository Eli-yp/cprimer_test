//函数第一次被调用时返回0,以后每次调用时加1
#include<iostream>
#include<cstddef>

using namespace std;

size_t count()
{
	static size_t ctr = 0;
	return ctr++;	//先返回0,再把ctr+1.也就是说第一次调用函数返回0,以后再加1
}

int main()
{
	//调用函数10次
	for(size_t i = 0; i < 10; ++i)
	{
		cout << count() << endl;
	}
	return 0;
}

