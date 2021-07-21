#include<iostream>
#include<iterator>
#include<cstring>
using namespace std;


int main(){
  char stra[]{"hello there"};     // char stra[] = "hello"
  char strb[5];
  cout << "stra length is " << std::size(stra) << endl;
  cout << "strb length is " << std::size(strb) << endl;
  cout << "stra = "<< stra << endl;

  strcpy(strb, stra);

  cout << "stra length is " << std::size(stra) << endl;
  cout << "strb length is " << std::size(strb) << endl;
  cout << "stra = "<< stra << endl;
  cout << "strb = "<< strb << endl;

  return 0;
}
