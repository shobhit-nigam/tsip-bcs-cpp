#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> la{11, 22, 33};
    list<int>::iterator i = la.begin();
    for (i = la.begin(); i != la.end(); i++)
    {
        cout << *i << endl;
    }
    cout << "size = " << la.size() << endl;
 //   cout << "capacity = " << la.capacity() << endl;

    return 0;
}