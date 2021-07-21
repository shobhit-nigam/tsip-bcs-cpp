#include<iostream>
using namespace std;

class SampleY;

class SampleX{
  int a;
  int b;
public:
  SampleX(int i, int j)
  {
    a=i;
    b=j;
  }
  void funcx(SampleX, SampleY);
};

class SampleY{
  int c;
  int d;
public:
  SampleY(int i, int j)
  {
    c=i;
    d=j;
  }
  friend void SampleX::funcx(SampleX, SampleY);
};

void SampleX::funcx(SampleX objx, SampleY objy)
{
  cout << "func x of sample x" << endl;
  int local = objx.a + objx.b + objy.c + objy.d;
  cout << "sum = " << local << endl;
}

int main()
{
  SampleX objm(11, 22);
  SampleY objn(33, 44);

  objm.funcx(objm, objn);

  return 0;
}
