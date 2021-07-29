#include<iostream>
#include "arrayint.h"
using namespace std;

int main()
{
  ArrayInt arr(6);
  for( int i{0}; i<arr.getLength(); i++)
  {
    cin >> arr[i];
  }
  for( int i{0}; i<arr.getLength(); i++)
  {
    cout << arr[i] << endl;
  }
  arr.resize(4);
  cout << "length is " << arr.getLength() << endl;
  for( int i{0}; i<arr.getLength(); i++)
  {
    cout << arr[i] << endl;
  }  
  arr.empty();
  cout << "length is " << arr.getLength() << endl;
  for( int i{0}; i<arr.getLength(); i++)
  {
    cout << arr[i] << endl;
  }


  return 0;
}
