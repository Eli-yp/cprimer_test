#include<iostream>

using namespace std;

int main()
{
	int d;
	while(cin >> d)
	{
		if (d != 42)
			cout << d << endl;
		else
			break;
	}

	return 0;
}
