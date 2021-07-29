#include<iostream>
using namespace std;
class Trainer
{
  string name;
public:
  Trainer(const string& n): name{n}
  {
  }
  const string& getName() const
  {
    return name;
  }
};

class Division
{
private:
    const Trainer& tr;
public:
  Division(const Trainer& ltr): tr{ltr}
  {
  }
};

int main()
{
  Trainer objt {"sn"};
  {
    Division objd {objt};
  }
  // division (objd) is out of scope
  // objt still exists
  cout << objt.getName() << endl;
  return 0;
}
