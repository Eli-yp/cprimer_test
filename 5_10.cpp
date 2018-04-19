#include<iostream>

using namespace std;

int main()
{
	char c;
	int asum = 0, esum = 0, isum = 0, osum = 0, usum = 0;
	int ksum = 0, tsum = 0, nsum = 0;

	/*
	//以下用的是if
	while (cin >> noskipws >> c)		//noskipws不忽略任何地方的空格
	{
		if (c == 'a')
			++asum;
		if (c == 'e')
			++esum;
		if (c == isum)
			++isum;
		if (c == osum)
			++osum;
		if (c == usum)
			++usum;
		if (c == ' ')
			++ksum;
		if (c == '\t')
			++tsum;
		if (c == '\n')
			++nsum;
	}
	*/

	//以下用的是switch
	while(cin >> noskipws >> c)		//noskipws不忽略任何地方的空格
	{
		switch(c)
		{
			case 'a':
			case 'A':
				++asum;
				break;
			case 'e':
			case 'E':
				++esum;
				break;
			case 'i':
			case 'I':
				++isum;
				break;
			case 'o':
			case 'O':
				++osum;
				break;
			case 'u':
			case 'U':
				++usum;
				break;
			case '\t':
				++tsum;
				break;
			case ' ':
				++ksum;
				break;
			case '\n':
				++nsum;
				break;
		}
	}


	cout << "a的个数是 " << asum << endl;
	cout << "e的个数是 " << esum << endl;
	cout << "i的个数是 " << isum << endl;
	cout << "o的个数是 " << osum << endl;
	cout << "u的个数是 " << usum << endl;
	cout << "空格的个数是 " << ksum << endl;
	cout << "制表符的个数是 " << tsum << endl;
	cout << "换行符的个数是 " << nsum << endl;

	return 0;
}
