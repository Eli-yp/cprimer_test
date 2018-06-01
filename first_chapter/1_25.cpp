#include<iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
	Sales_item total;	//保存下一条交易记录的变量
	//读入第一条交易记录，并确保有数据可以处理
	if (cin >> total)
	{
		Sales_item trans;	//保存和的变量
		//读入并处理剩余交易记录。并确保有数据可以处理
		while(cin >> trans)
		{
			//如果我们仍在处理相同的数
			if(total.isbn == trans.isbn)
				total += trans;	//更新总销售额
			else
			{
				cout << total << endl;
				total = trans;	//total仙子啊表示下一本书的销售额
			}
		}
		cout << total << endl;	//打印最后一本书的结果
	}
	else
	{
		//没有输入，警告读者
		cerr << "No Data?!" << endl;
		return -1;		//表示失败
	}
	
	return 0;
}
