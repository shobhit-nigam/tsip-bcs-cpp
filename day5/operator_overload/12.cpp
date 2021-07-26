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
    x=x*2.5;
    return *this;
  }
  SampleX operator-(const SampleX& obp)
  {
    SampleX temp;
    temp.x = this->x - obp.x;
    temp.y = this->y - obp.y;
    return temp;
  }
  SampleX operator+(const SampleX& obp)
  {
    SampleX temp;
    temp.x = this->x + obp.x;
    temp.y = this->y + obp.y;
    return temp;
  }
  SampleX operator-()
  {
    SampleX temp;
    temp.x = 0-(this->x);
    temp.y = -(this->y);
    return temp;
  }

};

int main()
{
  SampleX obja{5, 4};
  SampleX objb {8,9};
  SampleX objc;

  for (; obja != objb; ++obja)
  {
    obja.display();
    cout << "----\n";
  }
  cout << "outside" << endl;
  obja.display();
  objc = objb - obja;
  cout << "----\n";
  obja.display();
  objc = -obja;
  cout << "----\n";
  objc.display();
  objc = -obja+objb;
  cout << "----\n";
  objc.display();

  return 0;

}
