#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v1; //默认初始化
    vector<int> v3(10, 1);  //10个1
    vector<int> v4(10); //10个0
    vector<int> v5 = {1, 2, 3, 4, 5};   //1,2,3,4,5
    vector<int> v6{1,2,3,4,5};  //1,2,3,4,5
    vector<int> v7(v6);     //和v6一样
    vector<int> v8(v7.begin(), v7.end());   //和v7一样

    return 0;
}