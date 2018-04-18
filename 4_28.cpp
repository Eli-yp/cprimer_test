//输出每种内置类型所占空间的大小

#include<iostream>

using namespace std;

int main()
{
	char a;
	bool b;
	int i;
	float f;
	double d;
	short s;
	long l;
	long long ll;
	long double ld;
	cout << "size of char"  << " : " << sizeof(a) << endl;
	cout << "size of bool"  << " : " << sizeof(b) << endl;
	cout << "size of short"  << " : " << sizeof(s) << endl;
	cout << "size of int"  << " : " << sizeof(i) << endl;
	cout << "size of float"  << " : " << sizeof(f) << endl;
	cout << "size of double"  << " : " << sizeof(d) << endl;
	cout << "size of long"  << " : " << sizeof(l) << endl;
	cout << "size of long long"  << " : " << sizeof(ll) << endl;
	cout << "size of long double"  << " : " << sizeof(ld) << endl;


	return 0;
}
