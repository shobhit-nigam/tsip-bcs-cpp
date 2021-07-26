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
  int x {10};
  int y {4};
  double da = 10/4;
  double db = x/y;
  double dc = 10.0/4.0;

  cout << "da = " << da << endl;
  cout << "db = " << db << endl;
  cout << "dc = " << dc << endl;
  return 0;
}
