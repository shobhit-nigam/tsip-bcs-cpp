#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> veca {30, 50, 60, 90, 100};
    vector<int>::iterator i;
    for (i = veca.begin(); i != veca.end(); i++)
    {
        cout << *i << endl;
    }
    cout << "size = " << veca.size() << endl;
    cout << "capacity = " << veca.capacity() << endl;
    return 0;
}