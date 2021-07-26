#include<iostream>
using namespace std;

class SampleX
{
public:
  int valm {};
  int valn;
  SampleX(): valm{0}
  {

  }
  void update(int la, int lb)
  {
    valm = la;
    valn = lb;
    return;
  }
};

int main(){
  const SampleX objx{};
  // errors:
//  objx.val = 100;
//  objx.valn = 200;
//  objx.update(10, 20);
  return 0;
}
