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
  SampleX objc{100};
  // passing an actual object
  funca(objc);
  return 0;
}
