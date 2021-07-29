#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> veca {30, 50, 60, 90, 100};
    vector<int>::iterator it;
    veca.reserve(100);
    cout << "size = " << veca.size() << endl;
    cout << "capacity = " << veca.capacity() << endl;
    for (int i=0; i<100; i=i+2)
    {
        veca.push_back(i);
    }
    cout << "size = " << veca.size() << endl;
    cout << "capacity = " << veca.capacity() << endl;
    cout << "max_size = " << veca.max_size() << endl;
    return 0;
}