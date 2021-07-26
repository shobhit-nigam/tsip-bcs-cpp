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


void funca()
{
  class_type objy{200};
}

int main()
{
  auto da { 5.0};
  // error
  //auto ib;

  auto ib {3+7};
  auto ic {ib};

  const int id {100};   // const int
  auto ie {id};         //int

  int& ig {id};         // int ref
  auto ih {ig};         //int


  return 0;
}
