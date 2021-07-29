#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<string> veca {"hello", "hi", "guten tag"};
    vector<string>::iterator i;
    veca.push_back("aaa");
    veca.push_back("bbb");
    veca.push_back("ccc");
    cout << "displaying :" << endl;
    for (i = veca.begin(); i != veca.end(); i++)
    {
        cout << *i << endl;
    }
    return 0;
}