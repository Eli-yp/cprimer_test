#include<iostream>
#include<string>
#include<vector>

using namespace std;

//class定义的数据默认是私有的。故加个public才能使用它
class Sales_data{
public:
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main()
{
	Sales_data total;
	if (cin >> total.bookNo >> total.units_sold >> total.revenue){
		Sales_data trans;
		while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue){
			if(total.bookNo == trans.bookNo){
				total.revenue += trans.revenue;
			}
			else{
				cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
				total = trans;
			}
		}
		cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
	}
	else{
		cerr << "No data?" << endl;
		return -1;
	}
	return 0;
}

