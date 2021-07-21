#include<iostream>
#include<unistd.h>
using namespace std;

class sampleA
{
public:
  int x;
  int temp;

  sampleA(int lx, int ly)
  {
    x = lx;
    temp = ly;
    cout << "parameterised constructor\n";
    return;
  }

  void display();
  void changeValues(int, int);

};

void sampleA::changeValues(int a, int b)
{
  x = a;
  temp = b;
  cout << "changes done" << endl;
  return;
}

void sampleA::display()
{
  cout << "x = " << x << endl;
  cout << "temp = " << temp << endl;
  return;
}

int main(){
  sampleA obj2(55, 66);
  obj2.display();
  cout << "-------\n";
  obj2.changeValues(100, 200);
  cout << "-------\n";
  obj2.display();
  return 0;
}
