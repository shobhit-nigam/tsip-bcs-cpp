#include<iostream>
using namespace std;

class sampleA
{
public:
  int x=20;
  int y=30;

// defualt constructor
  sampleA()
  {
    cout << "hey from constructor" << endl;
  }

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

  ~sampleA(){
    cout << "destructing" << endl;
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
