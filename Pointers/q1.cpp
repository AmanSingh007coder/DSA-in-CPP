                                // C++ program to demonstrate the use of pointers

#include<iostream>
using namespace std;

int main()
{
  int a = 10;
  int* ptr = &a;

  cout << "Value of a: " << a << endl;
  cout << "Value at the address of a: " << *ptr << endl;  
  cout << "Address of a: " << ptr << endl; 
  cout << "Address of pointer ptr: " << &ptr << endl;

  return 0;
}