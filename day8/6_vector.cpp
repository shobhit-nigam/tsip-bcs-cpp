#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<string> veca {"hello", "hi", "guten tag", "aaa", "bbb"};
    vector<string>::iterator i;
    for (i = veca.begin(); i != veca.end(); i++)
    {
        cout << *i << endl;
    }
    cout << "-----\n";
    veca.resize(10, "qqq");
        for (i = veca.begin(); i != veca.end(); i++)
    {
        cout << *i << endl;
    }

    return 0;
}