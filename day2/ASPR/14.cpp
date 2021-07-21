#include<iostream>
using namespace std;


int main(){
  int arr[5]{10, 20, 30, 40, 50};

  // for:each
  // range based for loop
  for(auto num : arr)               // num is a copy of array element
  {
    cout << num << endl;
  }

  for(auto& element : arr)               // num is a copy of array element
  {
    cout << element << endl;
  }

  for(const auto& element : arr)               // num is a copy of array element
  {
    cout << element << endl;
  }

  return 0;
}
