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
  void cmd(){
    cout << "great command line" << endl;
    return;
  }
  void cmd(int la, int lb){
    cout << "parametrised command line" << endl;
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
    linux();
  }
  linux(){
    cout << "constructor of linux" << endl;
  }
  /*
  void cmd(){
    cout << "command line of linux" << endl;
    return;
  }
  */
  void cmd(int la, int lb){
    cout << "parametrised line of linux" << endl;
    return;
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
  linux ubuntu;
  ubuntu.cmd();
  ubuntu.cmd(100, 200);
  return 0;
}
