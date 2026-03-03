                                   // C++ program to demonstrate the use of pointers to pointers

#include<iostream>
using namespace std;

int main()
{
  int a = 10;
  int* ptr = &a;
  int** ptr2 = &ptr;
   
  cout << "Value of a: " << a << endl;;  
  cout << "Address of a: " << ptr << endl; 
  cout << "Address of pointer ptr: " << &ptr << endl;
  cout << "Address of pointer ptr2: " << ptr2 << endl;
  cout<<"adress of pointer ptr2: "<<&ptr2<<endl;

  return 0;
}