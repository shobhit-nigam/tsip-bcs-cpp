#include<iostream>
using namespace std;

int main(){
//  new int;
//  int *ptr {new int(100)};
  int *ptr {new int{100}};

  cout << "adr of ptr = " << &ptr << endl;
  cout << "adr pointed by ptr = " << ptr << endl;
  cout << "*ptr =" << *ptr << endl;

  delete ptr;
  // ptr becomes dangling pointer

  int *qtr {new int{75}};
  // behaviour is undefined

    cout << "adr of ptr = " << &ptr << endl;
    cout << "adr pointed by ptr = " << ptr << endl;
    cout << "*ptr =" << *ptr << endl;

    delete qtr;
  return 0;
}
