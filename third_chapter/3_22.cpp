//输入一段text内容。将其第一段全部改为大写并输出

#include<iostream>
#include<string>
#include<vector>
#include<cctype>


using namespace std;

int main()
{
	string text;
	vector<string> v;
	while(cin >> text)
		v.push_back(text);	//将文本添加到vector中
	for(auto t = v.begin(); t != v.end() && !(*t).empty(); ++t)
	{
		for (auto &c : *t)		//记住t是一个迭代器，说直白点是text里面的一个单词，要对单词的每个字符再执行大写替换，应该再遍历每个单词
			c = toupper(c);
		cout << *t << " ";
	}
	cout << endl;

	return 0;
}
