#include<iostream>
#include<array>

using namespace std;

int main()
{
    array<string, 5> veca {"hello", "hi", "guten tag", "aaa", "bbb"};
    cout << "size is " << veca.size() << endl;
    cout << "max size is " << veca.max_size() << endl;

    array<int, 10> vecb {11, 22, 33, 44, 55};
    cout << "size is " << vecb.size() << endl;
    cout << "max size is " << vecb.max_size() << endl;
    return 0;
}