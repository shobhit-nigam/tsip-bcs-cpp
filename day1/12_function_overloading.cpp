#include<iostream>
using namespace std;

void sum(int x, int y)
{
  cout << "two integers" << endl;
}

void sum(double x, double y)
{
  cout << "two doubles"<< endl;
}

void sum(long x, long y)
{
  cout << "two long ints"<< endl;
}

int main(){
  int a = 5;
  double b = 0.0;
  char c = 'a';
  sum(10, 20);
  sum(11.23, 20.56);
  sum(10, 20);
  return 0;
}
