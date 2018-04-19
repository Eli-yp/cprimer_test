#include<iostream>
#include<string>

using namespace std;

int main()
{
	string word;
	string my_word;
	int flag = 0;
	while( cin >> word)
	{
		if (word == my_word)
		{
			cout << word << endl; //说明该单词出现了两次，故应该输出该单词并退出
			flag = 1;
			break;
		}
		else
		{
			my_word = word;
		}
	}
	
	if (flag == 0)
		cout << "没有连续重复出现的单词" << endl;

	return 0;
}

