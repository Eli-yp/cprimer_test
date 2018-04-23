#include<iostream>
#include<string>

using namespace std;

class Screen{
public:
	typedef string::size_type pos;
	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {
		cout << "委托函数" << endl;
	
	}
	Screen(): Screen(3, 5, '#'){};
	Screen(istream &is): Screen(){
		cout << "istream" << endl; 
	}


private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
};

int main()
{
	Screen();
	return 0;
}
