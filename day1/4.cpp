#include<iostream>
using namespace std;

struct bank{
  int cid;
  char grade;
  void display(){
    cout << "grade is " << grade << endl;
    cout << "id is " << cid << endl;
  }
};

int main(){
  struct bank varx, vary;
  varx.cid = 1020;
  varx.grade = 'b';
  varx.display();
  vary = varx;
  vary.cid++;
  vary.display();
  return 0;
}
