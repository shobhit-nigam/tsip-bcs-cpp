#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int, string> ma{ {10, "aa"}, {15, "bb"}, {16, "cc"}};
    map<int, string> :: iterator it;

    for(it = ma.begin(); it != ma.end(); it++)
    {
        cout << it->first << "\t" << it->second << endl;
    }
    cout << "ma[15] = " << ma[15] << endl;

    


    return 0;
}