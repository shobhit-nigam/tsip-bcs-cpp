#include<iostream>
#include<set>
#include<list>

using namespace std;

int main()
{
    set<string> sa{ "dd", "bb", "cc", "aa", "dd", "aa", "cc", "aa"};
    set<string> :: iterator sit;

    cout << "\nprinting set" << endl;
    for(sit = sa.begin(); sit != sa.end(); sit++)
    {
        cout << *sit << "\t";
    }
        cout << endl;
    sa.insert("qq");
    sa.insert("ee");
    sa.insert("aa");
    for(sit = sa.begin(); sit != sa.end(); sit++)
    {
        cout << *sit << "\t";
    }
    cout << endl;
    return 0;
}