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
   // i = veca.begin();
    cout << "value at 2nd index is " << veca.at(2) << endl;
    return 0;
}