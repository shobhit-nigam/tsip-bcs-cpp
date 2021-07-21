#include<iostream>
using namespace std;

class Devices
{
public:
  Devices(){
    cout << "constructor of Devices" << endl;
  }

};

class Printer: public Devices
{
public:
  Printer(){
    cout << "constructor of Printer" << endl;
  }

};

class Scanner: public Devices
{
public:
  Scanner(){
    cout << "constructor of Scanner" << endl;
  }

};

class Copier: public Printer, public Scanner
{
public:
  Copier(){
    cout << "constructor of Copier" << endl;
  }
};

int main(){
  Copier objc;

  return 0;
}
