#include<iostream>
#include <cmath>
using namespace std;

class Time {
  int hour, minute;
public:
  Time()
  {
    hour = minute = 0;
  }
  Time(int lh, int lm) : hour(lh), minute(lm)
  {
  }
  void display()
  {
    cout << hour << " hours and " << minute<< " minutes "<< endl;
    return;
  }
  Time operator+ (const Time& opb )
  {
    Time temp;
    int total_minutes;
    total_minutes = (this->hour + opb.hour)*60 + this->minute + opb.minute;
    temp.minute = total_minutes%60;
    temp.hour = floor(total_minutes/60);

    return temp;
  }
  Time operator- (const Time& opb )
  {
    Time temp;
    int total_minutes;
    total_minutes = (this->hour - opb.hour)*60 + this->minute - opb.minute;
    temp.minute = total_minutes%60;
    temp.hour = floor(total_minutes/60);

    return temp;
  }

};

int main()
{
  Time obja{4, 40};
  Time objb {3, 30};
  Time objc {1, 20};
  Time objd;
  objd.display();
  //chaining
  objd = obja + objb + objc;
  cout << "-----" << endl;
  objd.display();
  return 0;

}
