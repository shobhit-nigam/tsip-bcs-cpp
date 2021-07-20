#include<iostream>
using namespace std;

class bank{
public:
  int cid;
  char grade;
  void display(){
    cout << "grade is " << grade << endl;
    cout << "id is " << cid << endl;
  }
};

int main(){
  class bank objx, objy;
  int a;      // no initializer
  int b=5;    // equal        copy initialization
  int c(6);   // parenthesis  direct initialization
  int d { 10 };  // braces    uniform initialization
                //            list initialization

  cout << c<< endl;
  cout << d << endl;

  return 0;
}
