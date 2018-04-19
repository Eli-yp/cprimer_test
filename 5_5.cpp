#include<iostream>

using namespace std;

int main()
{
	int d;
	cin >>d;
	char r;
	if (d > 0 && d <= 100)
	{
		if(d >= 0 && d < 60)
			r = 'F';
		if ( d < 70 )
			r = 'E';
		if(d < 80)
			r = 'D';
		if(d < 90)
			r = 'C';
		if(d < 100)
			r = 'B';
		else
			r = 'A';
	}

	else
		cout << "please input a new numner: ";
	cout << r << endl;

	return 0;
}


