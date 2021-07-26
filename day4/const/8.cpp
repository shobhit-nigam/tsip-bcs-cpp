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
  void hello(){
    cout << "hello" << endl;
    return;
  }
  void display() const{
    cout << "valm = " <<valm <<endl;
    cout << "valn = " <<valn <<endl;
    hello();
    return;
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
  SampleX objy{};
  // errors:
//  objx.valm = 100;
//  objx.valn = 200;
//    objx.hello();
//    objx.display();
//    objy.update(11, 22);
  return 0;
}
