#include<iostream>
#include<cstddef>

using namespace std;

int main()
{
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	int b[10];
	for (size_t i = 0; i < 10; ++i)
	{
		b[i] = a[i];
		cout << b[i] << endl;
	}

	return 0;
}

