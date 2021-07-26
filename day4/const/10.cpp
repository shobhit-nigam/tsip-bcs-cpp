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
    cout << "the const member function " << endl;
    cout << "valm = " <<valm <<endl;
    cout << "valn = " <<valn <<endl;
    return;
  }
  void display() {
    cout << "valm = " <<valm <<endl;
    cout << "valn = " <<valn <<endl;
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
  const SampleX objz = objy;
  const SamplA obja {objx};
    objx.display();
    cout << "------\n";
    objy.display();
  return 0;
}
