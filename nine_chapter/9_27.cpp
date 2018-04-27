#include<iostream>
#include<list>
#include<forward_list>

using namespace std;

int main()
{
    //要记住forward_list删除的是p指向的位置之后的元素，故要删除第一个元素，p应该指向首元素之前的位置
    forward_list<int> fl = {1,2,3,4,5,6,7,8,9};
    auto prev = fl.before_begin();
    auto curr = fl.begin();
    while(curr != fl.end())
    {
        if(*curr % 2 == 1)  //说明是奇数。就应该将其删除
        {
            curr = fl.erase_after(prev);    //看清楚括号里面的是prev，而不是curr
        }
        else
        {
            //移动curr指向下一个迭代器，然后prev指向之前的那个curr
            prev = curr;
            ++curr;
        }
    }

    for(auto it =  fl.begin(); it != fl.end(); ++it)
        cout << *it << " ";
    cout << endl;

    return 0;

}