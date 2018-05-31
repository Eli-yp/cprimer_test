#include<iostream>

using namespace std;

int main()
{
	int v1 = 0, v2 = 0;
	cout << "Enter two numbers: " << endl;
	cin >> v1 >> v2;
	int min, max;
	if(v1 < v2){
		min = v1;
		max = v2;
	}
	else{
		min = v2;
		max = v1;
	}
	for(int i = min; i <= max; ++i)
		cout << i << " ";
	cout << endl;

	return 0;
}
