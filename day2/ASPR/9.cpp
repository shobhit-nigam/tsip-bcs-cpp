#include<iostream>

int main(){
  const int val {5};
  const int& ref{val};

  const int y {15};
  const int& ref2{y};

  const int& ref3 {100};





  std::cout << "val = " << val << std::endl;
  std::cout << "ref = " << ref << std::endl;


    std::cout << "val = " << val << std::endl;
    std::cout << "ref = " << ref << std::endl;

  return 0;
}
