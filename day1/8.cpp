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
  cout << a << endl;

  scanf("%d", &a);
  printf("%d", a);

  cin >> a;
  cout << a<< endl;

  return 0;
}
