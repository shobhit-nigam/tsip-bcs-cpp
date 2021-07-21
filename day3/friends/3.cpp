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
  friend void funca(SampleX, SampleY);
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
  friend void funca(SampleX, SampleY);
};

void funca(SampleX objx, SampleY objy)
{
  int local = objx.a + objx.b + objy.c + objy.d;
  cout << "sum = " << local << endl;
  return;
}

int main()
{
  SampleX objm(11, 22);
  SampleY objn(33, 44);

  funca(objm, objn);
  return 0;
}
