#include<iostream>
using namespace std;

template <class T, class U>
void max_of(T x, U y)
{
  cout << "template one" << endl;
}

template <class T, class U>
void max_of(T x, U y, U z)
{
  cout << "template two" << endl;
}

template <class T>
void max_of(T x, T y)
{
  cout << "template three" << endl;
}

int main()
{
  int varx{0}, vary{0};
  char ca{0}, cb{0};
  max_of(varx, vary);
  max_of(varx, cb);
  max_of(varx, ca, cb);
  return 0;
}
