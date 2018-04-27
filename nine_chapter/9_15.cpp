#include<iostream>
#include<vector>
#include<list>

using namespace std;


int main()
{
    vector<int> v1 = {0,1,2,3,4,5,6,7,8,9};
    vector<int> v2 = {0,1,2,3,4,5,6,7,8,9};

    if(v1 == v2)
    {
        cout << "v1=v2" << endl;
    }

    else
        cout << "v1 != v2" << endl;

    return 0;
}



/*
//下面的程序试图比较list<int>和vector<int>是否相等。会编译出错的
int main() {
    list<int> l = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    if (l == v)
        cout << "l = v" << endl;
    else
        cout << "l != v" << endl;

    return 0;
}
 */