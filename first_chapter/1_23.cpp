#include<iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
	Sales_item currItem, nextItem;
	cin >> currItem;
	int cnt = 1;
	while(cin >> nextItem)
	{
		if(currItem.isbn == nextItem.isbn)
		{
			++cnt;
	//		currItem = nextItem;
		}
		else
		{
			cout << currItem.isbn << " has sold note" << cnt  << endl;
			currItem = nextItem;
			cnt = 1;
		}
	}
	cout << currItem.isbn << " has sold note" << cnt << endl;

	return 0;
}

