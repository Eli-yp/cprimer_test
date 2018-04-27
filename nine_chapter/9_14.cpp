#include<iostream>
#include<list>
#include<string>
#include<vector>

using namespace std;

int main()
{
    list<char *> a1 = {"my","name","is", "yang", "peng"};
    vector<string> s = {"a", "an", "the"};
    s.assign(a1.begin(), a1.end());     //list赋值给vector
    for(auto b = s.begin(); b != s.end(); ++b)
    {
        cout << *b << " ";
    }
    cout << endl;

    return 0;
}
