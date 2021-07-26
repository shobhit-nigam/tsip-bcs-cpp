#include<iostream>
using namespace std;

class SampleX
{
public:
  int valm {};
  int valn;
  SampleX(): valm{10}, valn{20}
  {

  }
  void update(int la, int lb)
  {
    valm = la;
    valn = lb;
    return;
  }
  void display() const{
    cout << "valm = " <<valm <<endl;
    cout << "valn = " <<valn <<endl;
    return;
  }
};

int main(){
  const SampleX objx{};
  // errors:
//  objx.valm = 100;
//  objx.valn = 200;
//  objx.update(10, 20);
    objx.display();
  return 0;
}
