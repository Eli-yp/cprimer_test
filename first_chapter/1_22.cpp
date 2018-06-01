#include<iostream>
#include "Sales_item.h"

using namespace std;

int main(int argc, char **argv)
{
	Sales_item item_sum, item;
	cin >> item_sum;	//先输入第一个保存在item_sum中
	while(cin >> item)
		item_sum += item;
	cout << item_sum << endl;

	return 0;
}
