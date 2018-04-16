//编写程序从标准输入流读入多个字符串并连接

#include<iostream>
#include<string>

using namespace std;

int main()
{
	/*
	string word;
	while (cin >> word)
		cout << word;
	cout << endl;   //这一种遇到文件结束标记退出循环
	*/
	/*
	//这一种是知道输入几个了
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	cout << s1 << s2 << s3;
	*/

	//用空格把字符串分割开来
	string word;
	while (cin >> word)
		cout << word << " ";
	cout << endl;

	return 0;
}
