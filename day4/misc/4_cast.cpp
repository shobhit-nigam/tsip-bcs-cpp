#include<iostream>
using namespace std;

class SampleX
{
  int valm;
public:
  SampleX(int x)
  {
    cout << "constructor of SampleX" << endl;
    valm = x;
  }
  int getValm() const
  {
    return valm;
  }
};

void funca(const SampleX &objc){
  cout << "x = " << objc.getValm() << endl;
  return;
}

int main()
{
  // implicit conversion
  // warnings
  bool b1 = 2.6;
  int ia = 33.6;
  cout << "b1 = " << b1 << endl;
  return 0;
}
