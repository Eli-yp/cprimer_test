#include<iostream>
#include<vector>
#include<list>

using namespace std;

//编写找数字的函数，迭代器是itreator。
bool serch_number(vector<int>::iterator b, vector<int>::iterator  e, int a){
    for(b; b != e; ++b)
    {
        if (*b == a)        //找到了
            return true;
    }
    return false;

};

int main()
{
    int number;
    vector<int> v1{0,1,2,3,4,5,6,7,8,9};
    auto b = v1.begin();    //定义b为指向vector容器的首元素
    auto e = v1.end();      //定义e为指向vector容器的尾元素的下一位置
    int find_number;
    cin >> find_number;
    if(serch_number(b, e, find_number))
        cout << "we have found it" << endl;
    else
        cout << "sorry,there is no " << find_number << " in it" << endl;

    return 0;
}