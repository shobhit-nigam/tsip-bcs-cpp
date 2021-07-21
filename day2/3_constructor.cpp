#include<iostream>
#include<unistd.h>
using namespace std;

class sampleA
{
public:
  int x=20;
  int y=30;
// defualt constructor
  sampleA()
  {
    cout << "hey from default constructor" << endl;
  }
// parameterised constructor
  sampleA(int lx, int ly=40)
  {
    x = lx;
    y = ly;
    cout << "parameterised constructor\n";
    return;
  }
  // copy constructor
  sampleA(const sampleA &temp)
  {
    x = temp.x;
    y = temp.y;
    cout << "in copy constructor" << endl;
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

void funca(sampleA objx){
  cout << "within function" << endl;
  return;
}

int main(){
  sampleA obj1;
  sampleA obj2(55, 66);
  sampleA obj3 = obj1;    // assignment
  sampleA obj4{ obj1};    //uniform or direct intialisation

  sleep(4);
  funca(obj1);
  //    objx = obj1
  sleep(4);

  return 0;
}
