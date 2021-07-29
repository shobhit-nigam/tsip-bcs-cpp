#include<iostream>
#include<cassert>
using namespace std;

int main()
{
  int varx {0};
  cout << "enter a value between 0 to 10" << endl;
  cin >> varx;

  assert(varx<=10);

  // code implementation
  return 0;
}
