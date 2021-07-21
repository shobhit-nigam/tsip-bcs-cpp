#include<iostream>
using namespace std;

int main(){
  int length{0};
  cin>> length;

  int *arr {new int[length]{} };

  arr[3] = 17;

  delete[] arr;
  return 0;
}
