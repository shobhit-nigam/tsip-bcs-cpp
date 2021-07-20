#include<iostream>
using namespace std;

class sampleA
{
private:
  int x;
  int y;
public:
// other way of defualt constructor
  sampleA() = default;


// parameterised constructor
  sampleA(int lx, int ly=40)
  {
    x = lx;
    y = ly;
    cout << "values initialised\n";
    return;
  }

  void display()
  {
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    return;
  }

};

int main(){
  sampleA obj1;
  sampleA obj2(55, 66);
  sampleA obj3(77);
  obj1.display();
  cout << "-------\n";
  obj2.display();
  cout << "-------\n";
  obj3.display();
  return 0;
}
