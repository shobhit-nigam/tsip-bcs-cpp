#include<iostream>
using namespace std;

int sum(int x, int y)
{
  return x+y;
}

double sum(double x, double y)
{
  return x+y;
}


int main(){
  int a = 5;
  double b = 0.0;
  a = sum(10, 20);
  cout << a << endl;
  b = sum(11.23, 20.56);
  cout << b << endl;
  return 0;
}
