#include<iostream>
using namespace std;

class SampleX
{
  int x, y;
public:
  SampleX(int a=0, int b=0): x (a), y(b)
  {
  }
  void display()
  {
    cout << "x is " << x << endl;
    cout << "y is " << y << endl;
    return;
  }
  bool operator!=(const SampleX opa)
  {
    return this->x != opa.x;
  }
  // pre increment overloaded
  SampleX& operator++(){
    ++x;
    return *this;
  }
  // post increment overloaded
  SampleX& operator++(int){
    ++x;
    return *this;
  }
};

int main()
{
  SampleX obja{5, 4};
  SampleX objb {8,9};

  for (; obja != objb; ++obja)
  {
    obja.display();
    cout << "----\n";
  }
  cout << "outside" << endl;
  obja.display();
  obja++;
  obja++;
  cout << "----\n";
  obja.display();

  return 0;

}
