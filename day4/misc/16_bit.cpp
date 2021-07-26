#include<iostream>
using namespace std;



int main()
{

  uint_fast8_t mask0 {0b0000'0001} ;   // represents bit 0
  uint_fast8_t ib{};
  ib = 0b11110000;   // 0000 0000 1111 0000
//  cout << "ib = " << ib << endl;
  string x;

  x = (ib & mask0) ? "on\n" : "off\n";
  cout << x;


  return 0;
}
