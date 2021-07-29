#include<iostream>
#include "arrayint.h"
using namespace std;

int main()
{
  ArrayInt arr(4);
  for( int i{0}; i<arr.getLength(); i++)
  {
    cin >> arr[i];
  }
  cout << "-----" << endl;
  for( int i{0}; i<arr.getLength(); i++)
  {
    cout << arr[i] << endl;
  }
  cout << "length is " << arr.getLength() << endl;
  arr.insert(999, 2);
  cout << "after insertion length is " << arr.getLength() << endl;
/*  arr.resize(4);

  for( int i{0}; i<arr.getLength(); i++)
  {
    cout << arr[i] << endl;
  }
  arr.empty();
  cout << "length is " << arr.getLength() << endl;
  */
  for( int i{0}; i<arr.getLength(); i++)
  {
    cout << arr[i] << endl;
  }


  return 0;
}
