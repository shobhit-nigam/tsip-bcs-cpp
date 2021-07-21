#include<iostream>

int main(){
  int val {5};
  int* ptr = &val;
//  int& ref = val;
  int& ref{val};
  int& ref2{ref};


  std::cout << "val = " << val << std::endl;
  std::cout << "ref = " << ref << std::endl;

  val = 23;

    std::cout << "val = " << val << std::endl;
    std::cout << "ref = " << ref << std::endl;
    std::cout << "ref2 = " << ref2 << std::endl;

  return 0;
}
