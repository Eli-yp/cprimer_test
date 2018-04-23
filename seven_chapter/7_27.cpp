#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Screen{
public:
	typedef string::size_type pos;
	Screen() = default;	//默认构造函数
	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c){}	//构造函数
	Screen &move(pos r, pos c); //声明move函数
	Screen &set(char);	//声明set函数
	Screen &set(pos, pos, char);	//声明另外一种set函数
	//定义display函数
	Screen &display(ostream &os){
		do_display(os);
		return *this;
	}
	const Screen &display(ostream &os) const{
		do_display(os);
		return *this;
	}

private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
	void do_display(ostream &os) const{
		os << contents;
	}
};

//move函数为内联函数
inline Screen &Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}

//设为内联
inline Screen &Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch)
{
	contents[r*width + col] = ch;
	return *this;
}

int main()
{
	Screen myScreen(5, 5, 'X');
	myScreen.move(4,0).set('#').display(cout);
	cout << endl;
	myScreen.display(cout);
	cout << endl;

	return 0;
}
