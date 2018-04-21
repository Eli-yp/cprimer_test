#include<iostream>

using namespace std;

int max(int d, int *p)
{
	return d > *p ? d : *p;
}

int main()
{
	int d1, d2;
	cin >> d1 >> d2;
	cout << max(d1, &d2) << endl; //注意d2前面要加&符号

	return 0;
}
