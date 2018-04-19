#include<iostream>

using namespace std;

int main()
{
	int d;
	cin >> d;
	char r = (d < 60) ? 'E' : (d < 70) ? 'D' : (d < 80) ? 'C' : (d < 90) ? 'B' : 'A';
	cout << r << endl;

	return 0;
}
