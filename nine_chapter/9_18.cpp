#include<iostream>
#include<string>
#include<deque>
#include<list>

using namespace std;

//用的是deque
int main()
{
    string word;
    deque<string> d;

    //将string对象添加到deque
    while (cin >> word)
        d.push_back(word);

    //打印deque的元素，其中b的类型为deque<string>::iterator;
    for(auto b = d.begin(); b != d.end(); ++b)
        cout << *b << " ";
    cout << endl;

    return 0;
}

/*
//用list
int main()
{
    string word;
    list<string> l;
    //将string对象添加到list中
    while(cin >> word)
        l.push_back(word);

    //使用迭代器打印list中的元素,it的类型为list<string>::iterator;
    for(auto it = l.begin(); it != l.end(); ++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}
 */