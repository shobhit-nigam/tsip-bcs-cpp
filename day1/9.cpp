#include<iostream>
using namespace std;



int main(){
  int a = 5;
  {
    cout << a << endl;
    int a = 10;
    cout << a << endl;
  }
  cout << a << endl;

  return 0;
}
