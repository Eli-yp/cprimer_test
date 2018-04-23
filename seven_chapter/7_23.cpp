#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Screen{
public:
	typedef string::size_type pos;
	Screen() = default;	//第一种构造函数
	Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' '){}	//第二种构造函数
	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c){}//第三种构造函数

private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
};

int main()
{
	return 0;
}
