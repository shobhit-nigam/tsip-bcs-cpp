#include<iostream>
using namespace std;

int main(){
//  new int;
  int *ptr {new int};
  *ptr = 100;

  cout << "adr of ptr = " << &ptr << endl;
  cout << "adr pointed by ptr = " << ptr << endl;

  return 0;
}
