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

void sum(int x, int y)
{
  cout << "two integers" << endl;
}

void sum(double x, double y)
{
  cout << "two doubles"<< endl;
}

void sum(long x, long y)
{
  cout << "two long ints"<< endl;
}

int main(){
  sampleA obja;
  class sampleB objb;
  obja.display();
  objb.display();
  /*
  sum(10, 20);
  sum(11.23, 20.56);
  sum(10, 20);*/
  return 0;
}
