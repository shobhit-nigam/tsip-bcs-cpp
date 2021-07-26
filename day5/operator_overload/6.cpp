#include<iostream>
#include <cmath>
using namespace std;

class car;
class autorick;

class vehicle
{
protected:
  int seat, wheels, driver;
public:
  vehicle()
  {
    seat=driver=wheels=0;
  }
  void display(){
    cout << "total number of " << seat << " people can travel" << endl;
    cout << "total number of " << driver << " drivers required" << endl;
  }
  friend vehicle operator+(const car& x, const autorick& y);
  friend vehicle operator+(const autorick& y, const car& x);
};
class car: public vehicle
{
public:
  car(int s = 4, int w = 4, int d = 1)
  {
    seat=s;
    wheels = w;
    driver = d;
  }
  friend vehicle operator+(const car& x, const autorick& y);
  friend vehicle operator+(const autorick& y, const car& x);
};
class autorick: public vehicle
{
public:
  autorick(int s=3, int w=3, int d=1)
  {
    seat=s;
    wheels = w;
    driver = d;
  }
  friend vehicle operator+(const car& x, const autorick& y);
  friend vehicle operator+(const autorick& y, const car& x);
};

vehicle operator+ (const car& x, const autorick& y)
{
  vehicle objv;
  int s{x.seat + y.seat};
  int w{x.wheels + y.wheels};
  objv.seat = s + x.driver + y.driver;
  objv.wheels = w;
  objv.driver = x.driver + y.driver;
  return objv;
}
vehicle operator+ (const autorick& y, const car& x)
{
  vehicle objv;
  int s{x.seat + y.seat};
  int w{x.wheels + y.wheels};
  objv.seat = s + x.driver + y.driver;
  objv.wheels = w;
  objv.driver = x.driver + y.driver;
  return objv;
}
int main()
{
  vehicle total;
  car accord, i10;
  autorick bajaj;
  total = bajaj + accord ;
  total.display();

  return 0;

}
