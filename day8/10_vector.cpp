#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> veca{11, 22, 33};
    vector<int>::iterator i = veca.begin();
    for (i = veca.begin(); i != veca.end(); i++)
    {
        cout << *i << endl;
    }
    cout << "size = " << veca.size() << endl;
    cout << "capacity = " << veca.capacity() << endl;

    return 0;
}