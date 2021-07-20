#include<iostream>
using namespace std;
int ga = 12;
int gb = 18;

void sum(int x, int y, int z = ga+gb)
{
  cout << "added value is " << x+y+z << endl;
}


int main(){
  sum(100, 200, 300);
  sum(100, 200);
//  sum(100);
  return 0;
}
