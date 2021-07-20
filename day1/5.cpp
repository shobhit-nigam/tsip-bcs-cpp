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
  objx.cid = 1020;
  objx.grade = 'b';
  objx.display();
  objy = objx;
  objy.cid++;
  objy.display();
  return 0;
}
