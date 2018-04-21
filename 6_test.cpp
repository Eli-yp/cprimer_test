#include<iostream>
#include<string>

using namespace std;

string::size_type find_char(const string &s, char c, string::size_type &occurs)
{
	decltype(s.size()) ret = 0;		//用于第一次出现时的设定
	occurs = 0;
	for(decltype(s.size()) i = 0; i != s.size(); ++i)
	{
		if(s[i] == c)	//如果相等
		{
			if(ret == 0)	//把判断是不是第一次出现，也就是说第一次出现的话ret就是0
				ret = i;
			++occurs;		//把出现的次数相加
		}
	}
	return ret;
}

int main()
{
	string s = "helloworld,you are very huge";
	char c = 'o';
	string::size_type ctr;
	string::size_type r = find_char(s, c, ctr);
	cout << r << endl;
	cout << ctr << endl;    //ctr就是用于统计出现的次数

	return 0;
}
