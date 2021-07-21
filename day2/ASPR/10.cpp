#include<iostream>

class sampleX{
public:
  int x=20;
  int max_temp = 64;
};

void funca(const sampleX& objr)
{
  // error
//  objr.max_temp = objr.max_temp*0.1;
  int allowance = objr.max_temp + objr.max_temp*0.1;
  std::cout << "in func objr.max_temp = " << objr.max_temp << std::endl;
  std::cout << "allowance = " << allowance << std::endl;
  return;
}


int main(){
  int val {5};
  sampleX obja;
  std::cout << "in main obja.max_temp = " << obja.max_temp << std::endl;
  funca(obja);
  std::cout << "in main obja.max_temp = " << obja.max_temp << std::endl;


  return 0;
}
