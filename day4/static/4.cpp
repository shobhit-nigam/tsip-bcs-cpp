#include<iostream>
using namespace std;

class SampleX
{
public:
  static constexpr int valm=10;
  int valn=20;
  /*
  SampleX(): valm{10}, valn{20}
  {

  }  */
  static void hello() {
    SampleX temp;
    cout << "hello" << endl;
    cout << "valm =" << valm << endl;
    cout << "temp.valn =" << temp.valn << endl;

    return;
  }
  void display() const{
    cout << "valm = " <<valm <<endl;
    cout << "valn = " <<valn <<endl;
    return;
  }
  /*
  void update(int la, int lb)
  {
    valm = la;
    valn = lb;
    return;
  }
  */
};
//int SampleX::valm=10;

int main(){
  /*
  SampleX objx{};
  SampleX objy{};
  objx.display();
  cout << "-----\n";
  objy.display();
  cout << "-----\n";
  objx.update(11, 22);
  objy.update(99, 88);
  objx.display();
  cout << "-----\n";
  objy.display();
  */
  SampleX::hello();
  cout << SampleX::valm << endl;


  return 0;
}
