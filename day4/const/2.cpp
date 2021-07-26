#include<iostream>
using namespace std;

void funcx(const int& la){
  return;
}

int main(){
  int x {10};   //preferred
  int const y {20};
  cout << "enter x " << endl;
  cin >> x;
  const int w {x};

  funcx(x);

  return 0;
}
