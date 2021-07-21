#include<iostream>
using namespace std;


int main(){
  int arr[5]{100, 250, 30, 140, 220};
  int max{ 0 };

  for(auto num : arr)
  {
    if (num > max)
    {
      max = num;
    }
  }
  cout << "max is " << max << endl;

  return 0;
}
