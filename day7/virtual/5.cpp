#include<iostream>
using namespace std;

class SampleX
{
protected:
  int val;

public:
  SampleX(int value): val {value}
  {
  }
  virtual string getName() = 0;

  int getValue() const
  {
    return val;
  }
  void func()
  {
    cout << "dummy function" << endl;
  }
};

class SampleY : public SampleX
{
public:
  SampleY(int value): SampleX {value}
  {
  }
  string getName() 
  {
    return "SampleY";
  }
  int getValue() const
  {
    return val+25;
  }
};

// is-a

int main()
{
  // error
//  SampleX objx{50};

  SampleY objy{50};
  cout << objy.getName() << " has a value " << objy.getValue() << endl;

  // base class reference = derived object
  SampleX& robjx{objy};
  cout << robjx.getName() << " has a value " << robjx.getValue() << endl;

  // base class pointer = adr of derived object
  SampleX* pobjx{&objy};
  cout << pobjx->getName() << " has a value " << pobjx->getValue() << endl;

  return 0;

}
