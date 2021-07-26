#include<iostream>
using namespace std;

class SampleX
{
  int arr[3];
public:
  SampleX(int a=0, int b=0, int c=0)
  {
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
  }
  int operator[](int i)
  {
    if (i>=3)
    {
      cout << "array out of bounds" << endl;
      exit(1);
    }
    else
    {
      return arr[i];
    }
  }

};

int main()
{
  SampleX obja{51, 24, 33};
  SampleX objb {84, 92, 11};
  cout << obja[2] << endl;
  cout << "----\n";
  cout << obja[4] << endl;
  cout << "----\n";

  return 0;

}
