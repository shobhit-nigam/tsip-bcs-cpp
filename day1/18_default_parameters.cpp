#include<iostream>
using namespace std;

void sum(int x, int y, int z=10);


int main(){
  sum(100, 200, 300);
  sum(100, 200);
  return 0;
}

void sum(int x, int y, int z)
{
  cout << "added value is " << x+y+z << endl;
}
