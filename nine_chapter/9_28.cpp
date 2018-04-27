#include<iostream>
#include<string>
#include<forward_list>

using namespace std;

void insert_string(forward_list<string> &fl, string &s1, string &s2)
{
    bool flag = false;  //当一个标志
//    auto it2 = fl.before_begin();

    auto it1 = fl.begin();  //一定要写在这里，这样it1才是个全局变量。不要在for的第一个那里定义
    for(it1; it1 != fl.end(); ++it1 )
    {
        if(*it1 == s1)  //如果找到s1
        {
            fl.insert_after(it1, s2);   //把s2插入到s1后面
            flag = true;    //改变标志的值
        }
    }

    if(!flag)   //说明没找到s1
        //注意，次数的it1不是指向首元素，而是指向fl的尾元素了。这一点一定要清楚
        fl.insert_after(it1, s2);   //将s2插到fl的末尾
}

int main()
{
    forward_list<string> fl(4, "yangpeng");
    string s1 = "yangpeng";
    string s2 = "a handsome boy";

    insert_string(fl, s1, s2);
    for(auto it = fl.begin(); it != fl.end(); ++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}