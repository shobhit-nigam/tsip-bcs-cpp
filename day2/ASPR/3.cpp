#include<iostream>

int main(){
  int val {5};
  int *ptr;
  ptr = &val;
  std::cout << "adr of val = " << &val << std::endl;
  std::cout << "value of ptr = " << ptr << std::endl;
  std::cout << "value of *ptr = " << *ptr << std::endl;

  *(&val)
  return 0;
}
