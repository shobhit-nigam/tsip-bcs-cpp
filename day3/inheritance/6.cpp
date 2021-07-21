#include<iostream>
#include<unistd.h>
using namespace std;

class unix{
private:
  void bell_standards(){
    cout << "standardisation are by bell and AT&T" << endl;
  }
public:
  unix(){
    cout << "constructor of unix" << endl;
  }
  ~unix(){
    cout << "constructor of unix" << endl;
  }
  void cmd(){
    cout << "great command line" << endl;
    bell_standards();
    return;
  }
protected:
  void arch(){
    cout << "stable & scalable architecture" << endl;
    return;
  }
};

class linux : public unix{
public:
  void free(){
    cout << "linux is free" << endl;
    arch();
  }
  linux(){
    cout << "constructor of linux" << endl;
  }
  ~linux(){
    cout << "destructor of linux" << endl;
  }
};
/*
class solaris : private unix{
public:
  void support(){
    cout << "excellent enterprise support" << endl;
    return;
  }
};
*/
int main(){
  unix aix;
  sleep(3);
  linux ubuntu;
  sleep(4);
  return 0;
}
