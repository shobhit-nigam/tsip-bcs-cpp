#include<iostream>
using namespace std;

class sampleA
{
private:
  int x;
  int y;
  int z;
public:

// parameterised constructor
// initializer list
  sampleA(int lx, int ly, int lz): x{lx}, y{ly}, z{lz}
  {
/*    x = 100;
    y = 200;
    z = 300;*/
    cout << "values initialised\n";
    return;
  }

  void display()
  {
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    return;
  }

};

int main(){
  sampleA obj2(100, 200, 300);
  sampleA obj3(11, 22, 33);
  obj2.display();
  cout << "-------\n";
  obj3.display();
  return 0;
}
