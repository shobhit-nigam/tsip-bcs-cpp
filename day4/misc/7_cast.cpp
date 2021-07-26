#include<iostream>
using namespace std;
/*
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
*/

int main()
{
  int ia {650};
  // error
  //char ca {ia};
  //cout << ca << endl;

  int ib {650};
  char cb {static_cast<char>(ib)};
  cout << cb << endl;

  return 0;
}
