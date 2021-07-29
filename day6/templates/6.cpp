#include<iostream>
using namespace std;

template <typename T, typename U>
void max_of(T x, U y)
{
  cout << "template one" << endl;
}

template <typename T, typename U>
void max_of(T x, U y, U z)
{
  cout << "template two" << endl;
}

template <typename U>
void max_of(U x, U y)
{
  cout << "template three" << endl;
}

int main()
{
  int varx{0}, vary{0};
  char ca{0}, cb{0};
  max_of<int, int>(varx, vary);
  max_of<int, char>(varx, cb);
  max_of<int, char, char>(varx, ca, cb);
  return 0;
}
