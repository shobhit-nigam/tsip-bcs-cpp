#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <vector<int>> veca{ 
        {11, 22, 33}, 
        {44, 55, 66}
        };
    for (int i=0; i<veca.size(); i++)
    {
        for (int j=0; j<veca[i].size(); j++)
        {
            cout << veca[i][j] << "\t";
        }
        cout << endl;
    }

    
    vector< vector<int> > matrix(3, vector <int>(1,2));

    return 0;
}