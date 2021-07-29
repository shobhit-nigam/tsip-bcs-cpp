#include<iostream>
using namespace std;
//error prone
template <typename T>
T max_of(T x, T y)
{
  cout << "template one" << endl;
  return (x>y) ? x: y;
}

template <typename T>
T max_of(T x, double y)
{
  cout << "template two" << endl;
  return (x>y) ? x: y;
}

int main()
{
  int varx{0};
  int vary{0};
  vary = max_of(11, 22.5);
  std::cout << "vary = " << vary << endl;
  std::cout << "-----" << endl;
  vary = max_of<>(31.5, 22.7);
  std::cout << "vary = " << vary << endl;
  std::cout << "-----" << endl;
  vary = max_of<int>(10, 14);
  std::cout << "vary = " << vary << endl;
  return 0;
}
