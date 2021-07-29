#include<iostream>
#include<set>
#include<list>

using namespace std;

int main()
{
    list<string> la{ "dd", "bb", "cc", "aa", "dd", "aa", "cc", "aa"};
    set<string> sa{ "dd", "bb", "cc", "aa", "dd", "aa", "cc", "aa"};
    set<string> :: iterator sit;
    list<string> :: iterator lit;

    cout << "printing list" << endl;
    for(lit = la.begin(); lit != la.end(); lit++)
    {
        cout << *lit << "\t";
    }
    cout << "\nprinting set" << endl;
    for(sit = sa.begin(); sit != sa.end(); sit++)
    {
        cout << *sit << "\t";
    }
    cout << endl;

    return 0;
}