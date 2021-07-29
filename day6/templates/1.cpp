#include<iostream>
using namespace std;

int max(int x, int y)
{
  return (x>y) ? x: y;
}

template <typename T>
T max(T x, T y)
{
  return (x>y) ? x: y;
}

int main()
{
  return 0;
}
