#include<iostream>
using namespace std;


int main(){
  int arr[5]{10, 20, 30, 40, 50};

  // for:each
  // range based for loop
  for(int num : arr)
  {
    cout << num << endl;
  }

  return 0;
}
