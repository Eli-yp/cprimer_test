#include<iostream>
#include<cstddef>

using namespace std;

int main()
{
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	for(size_t i = 0; i < 10; i++)
		cout << "a[" << i << "]" << " = " << a[i] << endl;

	return 0;
}
