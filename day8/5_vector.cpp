#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<string> veca {"hello", "hi", "guten tag", "aaa", "bbb"};
    vector<string>::iterator i;
    cout << "displaying :" << endl;
    for (i = veca.begin(); i != veca.end(); i++)
    {
        cout << *i << endl;
    }
    cout << "-----\n";
    veca.pop_back();
    for (i = veca.begin(); i != veca.end(); i++)
    {
        cout << *i << endl;
    }
    i = veca.begin();
    veca.erase(i+2);
    cout << "-----\n";
    for (i = veca.begin(); i != veca.end(); i++)
    {
        cout << *i << endl;
    }

    return 0;
}