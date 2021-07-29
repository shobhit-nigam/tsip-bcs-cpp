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
  string getName() const
  {
    return "SampleX";
  }
  int getValue() const
  {
    return val;
  }
};

class SampleY : public SampleX
{
public:
  SampleY(int value): SampleX {value}
  {
  }
  string getName() const
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
  SampleY objy{50};
  cout << objy.getName() << " has a value " << objy.getValue() << endl;

  SampleY& robjy{objy};
  cout << robjy.getName() << " has a value " << robjy.getValue() << endl;

  SampleY* pobjy{&objy};
  cout << pobjy->getName() << " has a value " << pobjy->getValue() << endl;

  return 0;

}
