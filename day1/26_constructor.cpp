#include<iostream>
using namespace std;

class sampleA
{
sampleA(){
  cout << "constructor" << endl;
}
};

int main(){
  sampleA obj1;
  return 0;
}
