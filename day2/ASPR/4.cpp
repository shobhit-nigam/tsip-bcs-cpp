#include<iostream>

int main(){
  int val {5};
  int* ptr = &val;
//  int& ref = val;
  int& ref{val};


  std::cout << "val = " << val << std::endl;
  std::cout << "ref = " << ref << std::endl;

  val = 23;

    std::cout << "val = " << val << std::endl;
    std::cout << "ref = " << ref << std::endl;

  return 0;
}
