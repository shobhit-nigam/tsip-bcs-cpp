#include<iostream>
using namespace std;



int main()
{
  int ia{};
  ia = 0x00FF;     // 0000 0000 1111 1111
  cout << "ia = " << ia << endl;

  bitset <8> ib{};
  ib = 0b11110000;   // 0000 0000 1111 0000
  cout << "ib = " << ib << endl;

// digit separators

  int ic{0b0001'1111'0000};
  // 0000 0001 1111 0000
  cout << "ic = " << hex << ic << endl;
  //01 f0



  return 0;
}
