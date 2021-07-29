#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<string> veca;
    // index
    int i;
    veca.push_back("hello");
    veca.push_back("hi");
    veca.push_back("good  morning");
    cout << "displaying :" << endl;
    for (i=0; i<veca.size(); i++)
    {
        cout << veca[i] << endl;
    }
    return 0;
}