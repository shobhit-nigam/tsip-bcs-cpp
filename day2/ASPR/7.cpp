#include<iostream>

void funca(int& r)
{
  r = 6;
  std::cout << "in func r = " << r << std::endl;
  return;
}


int main(){
  int val {5};

  std::cout << "in main val = " << val << std::endl;
  funca(val);
  std::cout << "in main val = " << val << std::endl;


  return 0;
}
