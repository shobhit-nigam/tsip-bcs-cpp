#include<iostream>

int main(){
  int val {5};
  int& ref{val};

  int y {7};
  int& ref2{y} ;

  std::cout << "val = " << val << std::endl;
  std::cout << "ref = " << ref << std::endl;
  std::cout << "ref2 = " << ref2 << std::endl;
  std::cout << "y = " << y << std::endl;
  std::cout << "adr of val = " << &val << std::endl;
  std::cout << "adr of ref = " << &ref << std::endl;

  // error
  //&ref2 = val;

    std::cout << "val = " << val << std::endl;
    std::cout << "ref = " << ref << std::endl;
    std::cout << "ref2 = " << ref2 << std::endl;
    std::cout << "y = " << y << std::endl;

  return 0;
}
