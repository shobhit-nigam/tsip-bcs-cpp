#include<iostream>
using namespace std;

class unix{
private:
  void bell_standards(){
    cout << "standardisation are by bell and AT&T" << endl;
  }
public:
  void cmd(){
    cout << "great command line" << endl;
    bell_standards();
    return;
  }

};

class linux : public unix{
public:
  void free(){
    cout << "linux is free" << endl;
//    bell_standards();
  }
};

int main(){
  unix aix;
  linux ubuntu;
  aix.cmd();
  ubuntu.cmd();
  ubuntu.free();
  return 0;
}
