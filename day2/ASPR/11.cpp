#include<iostream>

class sampleX{
public:
  int x=20;
  int max_temp = 64;
};

int main(){
  int val {5};    //val = 5
  sampleX obja;
  sampleX *ptr {&obja};
  sampleX& ref {obja};

  std::cout << "in main obja.max_temp = " << obja.max_temp << std::endl;
  std::cout << "in main ptr->max_temp = " << ptr->max_temp << std::endl;
  std::cout << "in main ref.max_temp = " << ref.max_temp << std::endl;


  return 0;
}
