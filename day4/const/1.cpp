#include<iostream>

void funcx(const int& la){
  return;
}

int main(){
  const int x {10};   //preferred
  int const y {20};
  // error
  //const int z;
  const int w {x};

  funcx(x);

  return 0;
}
