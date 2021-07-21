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
//    bell_standards();
    arch();
  }
};

class solaris : private unix{
public:
  void support(){
    cout << "excellent enterprise support" << endl;
    return;
  }
};

int main(){
  unix aix;
  linux ubuntu;
  solaris objs;
  ubuntu.cmd();
  objs.support();
//  objs.cmd();
  return 0;
}
