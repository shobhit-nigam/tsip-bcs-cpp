#include<iostream>
#include<cassert>
using namespace std;

class SampleX
{
  int vara, varb;
  int *ptr;
public:
  SampleX()
  {
    ptr = new int;
  }
  ~SampleX()
  {
    delete ptr;
  }
  // for deep copy
  
  SampleX(SampleX& temp)
  {
    vara = temp.vara;
    varb = temp.varb;
    ptr = new int;
    *ptr = *temp.ptr;
  }
  void display()
  {
    cout << "vara = " << vara << endl;
    cout << "varb = " << varb << endl;
    cout << "*ptr = " << *ptr << endl;
    return;
  }
  void update(int la, int lb, int lc)
  {
    vara = la;
    varb = lb;
    *ptr = lc;
  }
};

int main()
{
  SampleX obja;
  obja.update(100, 200, 300);
  SampleX objb = obja;
  obja.display();
  objb.display();
  obja.update(11, 22, 33);
  obja.display();
  objb.display();
  return 0;
}
