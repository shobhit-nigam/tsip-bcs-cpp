#include<iostream>
using namespace std;

template <typename T>
T max_of(T x, T y)
{
  return (x>y) ? x: y;
}

int main()
{
  int x{0};
  x = max_of<>(11, 22);
  std::cout << "x = " << x << endl;

  x = max_of(31, 22);
  std::cout << "x = " << x << endl;

  std::cout << max_of<int>(10, 14) << endl;
  return 0;
}
