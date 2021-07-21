#include<iostream>
#include<unistd.h>
using namespace std;

class unix{
public:
  unix(int la)
  {
    cout << "unix la = " << la <<endl;
  }
};

class linux : public unix{
public:
  linux(int la, int lb) : unix{ la }
  {
    cout << "linux lb = " << lb <<endl;
  }
};

class android : public linux{
public:
  android(int la, int lb, int lc): linux { la, lb }
  {
    cout << "android lc = " << lc <<endl;
  }
};

int main(){
  android oxygenOS(11, 33, 55);
  return 0;
}
