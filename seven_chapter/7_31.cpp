#include<iostream>

using namespace std;

class X;	//前向声明X
class Y;	//前向声明Y

class X
{
	Y *p = nullptr;
};

class Y
{
	X object;
};

int main()
{
	return 0;
}
