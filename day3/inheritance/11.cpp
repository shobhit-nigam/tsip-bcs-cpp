#include<iostream>
#include<unistd.h>
using namespace std;

// error prone (default constructor of parent)

class unix{
private:
  void bell_standards(){
    cout << "standardisation are by bell and AT&T" << endl;
  }
public:
  unix(int la){
    cout << "parameterised constructor of unix" << endl;
  }
  void cmd(){
    cout << "great command line" << endl;
    return;
  }
  void cmd(int la, int lb){
    cout << "parameterised command line" << endl;
    return;
  }
  void arch(){
    cout << "stable & scalable architecture" << endl;
    return;
  }
};

class linux : public unix{
public:
  void free(){
    cout << "linux is free" << endl;
  }
  linux(){
    cout << "parameterised constructor of linux" << endl;
  }
};

/*
class android : public linux{
public:
  android(){
    cout << "android constructor" << endl;
  }
  void ui(){
    cout << "android has great ui" << endl;
  }
};
*/

int main(){
  unix aix(100);
//  linux ubuntu(100);
//  android oxygenOS;
  return 0;
}
