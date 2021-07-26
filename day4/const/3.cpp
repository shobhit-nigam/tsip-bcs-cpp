#include<iostream>
using namespace std;

void funcx(const int& la){
  return;
}

int main(){
  int x {10};   //preferred
  constexpr int y {20};
  cout << "enter x " << endl;
  cin >> x;
  const int w {x};
  cout << "w = " << w << endl;

  funcx(x);

  return 0;
}
