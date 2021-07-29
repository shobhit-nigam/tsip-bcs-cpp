#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<string> veca {"hello", "hi", "guten tag"};
    vector<string>::iterator i;
    cout << "displaying :" << endl;
    for (i = veca.begin(); i != veca.end(); i++)
    {
        cout << *i << endl;
    }
    i = veca.begin();
    veca.insert(i+2, 3, "wednesday");
    cout << "-----\n";
    for (i = veca.begin(); i != veca.end(); i++)
    {
        cout << *i << endl;
    }
    return 0;
}