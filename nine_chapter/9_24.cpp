#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    cout << v[0] << endl;
    cout << v.at(0) << endl;
    cout << *(v.begin()) << endl;
    cout << v.front() << endl;

    return 0;
}
