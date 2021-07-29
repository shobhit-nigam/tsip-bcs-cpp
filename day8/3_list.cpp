#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> la{11, 22, 33, 66, 11, 88, 99};
    list<int>::iterator i = la.begin();
    for (i = la.begin(); i != la.end(); i++)
    {
        cout << *i << endl;
    }
    cout << "----" << endl;
    la.sort();
    for (i = la.begin(); i != la.end(); i++)
    {
        cout << *i << endl;
    }
    


    return 0;
}