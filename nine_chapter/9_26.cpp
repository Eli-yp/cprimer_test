#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> odd(begin(ia), end(ia));    //将数组拷贝到vector。vector存的是奇数
    list<int> even(begin(ia), end(ia));     //将数组拷贝到list。list存的是偶数


    //vector的第一种操作
    for(auto it1 = odd.begin(); it1 != odd.end(); )
    {
        if ((*it1) % 2 == 0)    //如果是偶数
            it1 = odd.erase(it1);   //则将该数删除，将it指向下一个元素
        else
            ++it1;      //否则，将该数保留。将it直接指向下一个元素
    }
    //遍历打印元素
    for(auto it1 = odd.begin(); it1 != odd.end(); ++it1)
        cout << *it1 << " ";
    cout << endl;

/*
    //vector的第二种操作
    auto it1 = odd.begin();
    while(it1 != odd.end())
    {
        if(*it1 % 2 == 0)   //如果是偶数
            it1 = odd.erase(it1);   //将其删除，并将it指向下一个元素
        else
            ++it1;      //否则，直接将it指向下一个元素
    }
    for(auto it1 = odd.begin(); it1 != odd.end(); ++it1)
        cout << *it1 << " ";
    cout << endl;

*/
     //list的第一种操作
    for(auto it2 = even.begin(); it2 != even.end(); )
    {
        if(*it2 % 2 == 1 )      //如果是奇数，将其删除，将it2指向下一个元素
            it2 = even.erase(it2);
        else
            ++it2;      //否则，直接将it2指向下一个元素
    }
    //遍历打印
    for(auto b = even.begin(); b != even.end(); ++b)
        cout << *b << " ";
    cout << endl;

    return 0;
}

/*
    //list的第二种操作
    auto it2 = even.begin();
    while(it2 != even.end())
    {
        if (*it2 % 2 == 1 ) //同上面的一样的说明
            it2 = even.erase(it2);
        else
            ++it2;
    }
    for(auto b = even.begin(); b != even.end(); ++b)
        cout << *b << " ";
    cout << endl;


    return 0;
}
*/