#include<iostream>
using namespace std;

//void sum(int x=50, int y, int z=10)
void sum(int x, int y=50, int z=10)
{
  cout << "added value is " << x+y+z << endl;
}


int main(){
  sum(100, 200, 300);
  sum(100, 200);
  return 0;
}
