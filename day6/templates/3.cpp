#include<iostream>
using namespace std;
/*
int max_of(int x, int y)
{
  return (x>y) ? x: y;
}*/

template <typename T>
T max_of(T x, T y)
{
  return (x>y) ? x: y;
}

int main()
{
  int varx{0};
  double vary{0};
  varx = max_of<>(11, 22);
  std::cout << "varx = " << varx << endl;
  std::cout << "-----" << endl;
  vary = max_of<double>(31.5, 22.5);
  std::cout << "vary = " << vary << endl;
  std::cout << "-----" << endl;
  varx = max_of<int>(10, 14);
  std::cout << "varx = " << varx << endl;
  return 0;
}
