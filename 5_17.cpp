#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> v1{0,1,2,2};
	vector<int> v2{0,1,2,2,3,5,8};
	int flag = 0;	
	auto l1 = v1.size();
	auto l2 = v2.size();
	auto min = (v1.size() > v2.size()) ? v2.size() : v1.size();	//min表示最小的vector的长度
	for(decltype(v1.size()) i = 0; i != min; ++i)	//比较
	{
		if (v1[i] != v2[i])			//若在相等的长度下有值不相等
			flag = 1;			//则令flag=1
	}

	if(flag == 0)
		cout << "True" << endl;
	else
		cout << "False" << endl;

	return 0;
}

