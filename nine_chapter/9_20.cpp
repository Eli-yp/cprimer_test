#include<iostream>
#include<list>
#include<deque>

using namespace std;

int main()
{
    list<int> l = {1,2,3,4,5,6,7,8,9,10};
    deque<int> odd;     //定义存放奇数的deque
    deque<int> even;    //定义存放偶数的deque

    //遍历l
    for(auto it = l.begin(); it != l.end(); ++it)
    {
        if (*it % 2 == 1)       //奇数的存放在奇数的deque中
            odd.push_back(*it);
        else
            even.push_back(*it);    //否则存在偶数的deque中
    }

    //打印奇数的deque中的元素
    cout << "奇数为： ";
    for(deque<int>::iterator b1 = odd.begin(); b1 != odd.end(); ++b1)
        cout << *b1 << " ";
    cout << endl;

    //打印偶数的deque中的元素
    cout << "偶数为： ";
    for(deque<int>::iterator b2 = even.begin(); b2 != even.end(); ++b2)
        cout << *b2 << " ";
    cout << endl;

    return 0;
}