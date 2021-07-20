#include<iostream>
using namespace std;

class sampleA
{
public:
  int x;
  int y;
  void display()
  {
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    return;
  }
  void update(int lx, int ly)
  {
    x = lx;
    y = ly;
    cout << "values initialised\n";
    return;
  }
};

int main(){
  sampleA obj1;
  obj1.display();
  cout << "-------\n";
  obj1.update(100, 200);
  cout << "-------\n";
  obj1.display();
  return 0;
}
