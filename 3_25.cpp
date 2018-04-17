//用迭代器统计各个分数段的个数

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int grade;
	vector<int> scores(11, 0);
	while(cin >> grade)		//输入成绩
	{
		if ( grade <= 100)
		{
			auto it = scores.begin();		//指向vector第一个对象
			auto n = grade / 10;		//求得分段
			it = it + n;				//令当前的向前进n个
			++(*it);			//对应分数段的个数加1
		}
	}

	for (int i = 0; i <= 10; ++i)
	{
		cout << i << "~" << i*10 + 10 << "的个数是" << scores[i] << endl;
	}

	return 0;

}
