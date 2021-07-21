#include<iostream>
using namespace std;

class unix{
public:
  void bell_standards(){
    cout << "standardisation are by bell and AT&T" << endl;
  }
public:
  void cmd(){
    cout << "great command line" << endl;
    return;
  }
};

class linux : public unix{
public:
  void free(){
    cout << "linux is free" << endl;
    bell_standards();
  }
};

int main(){
  unix aix;
  linux ubuntu;
  ubuntu.cmd();
  ubuntu.free();
  // error
  // ubuntu.bell_standards();
  return 0;
}
