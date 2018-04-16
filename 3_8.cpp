#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	cin >> s;
	
	/*
	//遍历for循环
	for (auto &c : s)
		c = 'X';
	cout << s << endl;
	*/

	/*
	//传统for循环
	for (decltype(s.size()) i = 0; i != s.size(); ++i)
		s[i] = 'X';
	cout << s << endl;
	*/

	//while循环
	decltype(s.size()) i = 0;
	while (i != s.size())
	{
		s[i] = 'X';
		i++;
	}
	cout << s << endl;


	return 0;
}
