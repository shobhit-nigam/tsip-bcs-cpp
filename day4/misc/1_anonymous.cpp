#include<iostream>
using namespace std;

int sum(int la, int lb)
{
  return la+lb;
}

void funca(int lc){
  cout << "lc = " << lc;
  return;
}

int main()
{
  cout << sum(10, 20) << endl;
  funca(11+22);
  return 0;
}
