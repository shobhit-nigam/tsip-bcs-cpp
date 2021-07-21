#include<iostream>

class sampleX{
public:
  int x=20;
};

void funca(sampleX& objr)
{
  objr.x = 6;
  std::cout << "in func objr.x = " << objr.x << std::endl;
  return;
}


int main(){
  int val {5};
  sampleX obja;
  std::cout << "in main obja.x = " << obja.x << std::endl;
  funca(obja);
  std::cout << "in main obja.x = " << obja.x << std::endl;


  return 0;
}
