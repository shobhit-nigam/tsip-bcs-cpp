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
    i = find(veca.begin(), veca.end(), "aaa") ;
    if (i != veca.end())
    {
        int loc = i - veca.begin();
        cout << "found at " << loc << " location " << endl;

    }
    else
    {
        cout << "not found" << endl;
    }

    return 0;
}