#include<iostream>
using namespace std;

struct bank{
  int cid;
  char grade;
};

int main(){
  struct bank varx, vary;
  varx.cid = 1020;
  varx.grade = 'b';
  cout << varx.cid << endl;
  vary = varx;
  cout << vary.grade << endl;
  return 0;
}
