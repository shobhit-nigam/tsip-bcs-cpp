#include<iostream>
using namespace std;

class SampleX
{
  int valm;
public:
  SampleX(int x)
  {
    cout << "constructor of SampleX" << endl;
    valm = x;
  }
  int getValm() const
  {
    return valm;
  }
};

using class_type = SampleX;

void funca()
{
  class_type objy{200};
}

int main()
{
  using salary_t = double;
//  using class_type = SampleX;

  salary_t john {345.20};
  salary_t jane {200.66};

  class_type objx {100};

  return 0;
}
