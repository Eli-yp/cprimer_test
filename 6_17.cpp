#include<iostream>
#include<string>
#include<cctype>

using namespace std;

//编写函数判断string对象中是否含有大写字母
int judge(const string &s)
{
	for (decltype(s.size()) i = 0; i != s.size(); ++i)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			return 1;
		}
	}
	return 0;
}

//编写函数把string对象全部改为小写形式
string reset(string &s)
{
	for (decltype(s.size()) i = 0; i != s.size(); ++i)
		s[i] = tolower(s[i]);	//改为小写形式
//		s[i] = toupper(s[i]);	//改为大写形式
	return s;
}


int main()
{
	string s;
	cin >> s;
	if (judge(s) == 1)
		cout << "s中含有大写字母" << endl;
	else
		cout << "s中不含有大写字母" << endl;
	cout << reset(s) << endl;

	return 0;
}

