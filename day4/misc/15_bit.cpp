#include<iostream>
using namespace std;



int main()
{

  bitset <8> ib{};
  ib = 0b11110000;   // 0000 0000 1111 0000
  cout << "ib = " << ib << endl;

  ib.set(2);
                      // 0000 0000 1111 0100
  cout << "ib = " << ib << endl;


  // set, reset, flip

  cout << "ib = " << ib.test(6) << endl;



  return 0;
}
