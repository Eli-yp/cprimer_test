#include<iostream>
#include<string>
#include<vector>

using namespace std;

//定义person类
class Person{
public:
	string name;
	string address;
	
	//定义构造函数
	Person(string people_name, string people_address) : name(people_name), address(people_address) {};

	//获取姓名的函数
	string getname() const		
	{
		return name;
	}

	//获取地址的函数
	string getaddress() const
	{
		return address;
	}
};

//读取person对象的操作
istream &read(istream &is, Person &person)
{
	is >> person.name >> person.address;
	return is;
}

//打印person对象的操作
ostream &print(ostream &os, const Person &person)
{
	os << person.name  << " " << person.address;
	return os;
}

int main()
{
	Person person{"yangpeng", "guangzhou"};
//	Person person; //因为用了构造函数，故要实列化类，这样就不行了

	read(cin, person);	//读取person类对象
	print(cout, person);	//打印person类对象
	cout << endl;

	cout << person.getname() << endl;	//获取名字
	cout << person.getaddress() << endl;	//获取地址
	return 0;
}
