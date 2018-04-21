#include<iostream>
#include<vector>

using namespace std;

void get_val(vector<int> v, int i)
{
	if(i != -1)
	{
		cout << v[i] << " ";	//输出当前值
		i--;
		get_val(v,i);			//递归使用函数
	}
}

int main()
{
	vector<int> v{1,2,3,4,5,6,7,8,9,10};
	get_val(v, v.size() - 1);
	cout << endl;

	return 0;
}

