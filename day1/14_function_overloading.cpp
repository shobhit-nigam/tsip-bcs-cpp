#include<iostream>
using namespace std;

class sampleA
{
public:
  void display(){
    cout << "in class a" << endl;
  }
};

class sampleB
{
public:
  void display(){
    cout << "in class b" << endl;
  }
};

void sum(sampleA x, sampleA y)
{
  cout << "two sample A objects" << endl;
}

void sum(sampleB x, sampleB y)
{
  cout << "two sample B objects" << endl;
}

int main(){
  sampleA obja, objx;
  class sampleB objb, objy;

  sum(obja, objx);
  sum(objb, objy);
  return 0;
}
