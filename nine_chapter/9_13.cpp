#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main()
{
    list<int> l{1,2,3,4,5};     //构建list<int>
    vector<int> v{6,7,8,9,10};  //构建vecor<int>

    vector<double> d1(l.begin(), l.end());      //从list<int>转化过去的vector<double>
    vector<double> d2(v.begin(), v.end());      //从vector<int>转化过去的vector<double>

    //验证list转过去的
    for(auto it1 = d1.begin(); it1 != d1.end(); ++it1)
    {
        cout << *it1 << " ";
    }
    cout << endl;

    //验证vector<int>转过去的
    for(auto it2 = d2.begin(); it2 != d2.end(); ++it2) {
        cout << *it2 << " ";
    }
    cout << endl;

    return 0;
}