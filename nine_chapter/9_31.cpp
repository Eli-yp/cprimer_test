#include<iostream>
#include<list>
#include<forward_list>

using namespace std;

int main()
{
    list<int> l = {0,1,2,3,4,5,6,7,8,9};
    auto it = l.begin();
    while(it != l.end())
    {
        if(*it % 2 == 1)
        {
            it = l.insert(it, *it);
            ++it;
            ++it;
            //书本上原来的是it += 2;
        }
        else
            it = l.erase(it);
    }

    for(auto it =  l.begin(); it != l.end(); ++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}