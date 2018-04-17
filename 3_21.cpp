//用迭代器把vector对象输出来

#include<iostream>
#include<string>
#include<vector>
#include<cctype>

using namespace std;

int main()
{
	 int d;
	 vector<int> v;	//定义容器vector
	 while (cin >> d)
		 v.push_back(d);		//把数据添加到vector容器
	 for(auto it = v.begin(); it != v.end(); ++it)		//使用迭代器输出数据
		 cout << *it << endl;

	 return 0;

}
