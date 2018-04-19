#include<iostream>

using namespace std;

int main()
{
	char d; 
	int cnt = 0;
	//以下为求总的 元音字符个数
	while (cin >> d)   //输入文本
	{
		if ( d == 'a' || d == 'e' || d == 'o' || d == 'i' || d == 'u')	//判断是否为元音
			++cnt;
	}
	cout << cnt << endl;

	return 0;
}

