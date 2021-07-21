#include<iostream>
using namespace std;

class SampleX{
  int a;
  int b;
public:
  SampleX(int i, int j)
  {
    a=i;
    b=j;
  }
  friend void funca(SampleX objf);
};

void funca(SampleX objf)
{
  cout << "a = " << objf.a << endl;
  cout << "b = " << objf.b << endl;
  return;
}

int main()
{
  SampleX objn(11, 22);

  funca(objn);
  return 0;
}
