#include<iostream>
using namespace std;

class SampleX
{
public:
  SampleX()
  {
    cout << "SampleX constructor \n";
  }
virtual ~SampleX()
  {
    cout << "SampleX destructor \n";
  }
};

class SampleY : public SampleX
{
private:
  int* arr;
public:
  SampleY(int length): arr{new int[length]}
  {
    cout << "Sampley constructor \n";
  }
  virtual ~SampleY()
  {
    cout << "SampleY destructor \n";
    delete[] arr;
  }
};

// is-a

int main()
{
  SampleY *pobjy{new SampleY(5)};
  SampleX *pobjx {pobjy};
  cout << "-----\n";

  delete pobjx;
  return 0;

}
