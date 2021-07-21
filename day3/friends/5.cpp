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
  friend class SampleY;
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
  void display(SampleX& objx)
  {
    cout << "a = " << objx.a<< '\n';
    cout << "b = " << objx.b<< '\n';
  }
};


int main()
{
  SampleX objm(11, 22);
  SampleY objn(33, 44);

  objn.display(objm);

  return 0;
}
