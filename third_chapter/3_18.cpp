//从cin读入一组词并把它们存入vector。把词改为大写，输出

#include<iostream>
#include<string>
#include<vector>
#include<cctype>

using namespace std;

int main()
{
	string s;	//定义字符串
	vector<string> v;	//定义vector
	while(cin >> s)		//输入字符串
		v.push_back(s);	//添加到vector
	for (auto &w : v)	//对于vector中的每一个单词，注意是单词，即词组
	{
		for (auto &c : w)	//对于vector中每个单词的每个字符
			c = toupper(c);	//将其变成大写
	//	cout << endl;
	}
	for (auto word : v)	//对于vector中的每个单词
		cout << word << endl;	//换行输出

	return 0;
}
