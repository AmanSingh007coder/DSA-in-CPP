                                                // Pass by reference

 #include<iostream>
 using namespace std;

 void changeA(int *a)
 {
  *a = 20;
 }

 int main()
 {

  int a = 10;
  changeA(&a);
  cout << "Value of a: " << a << endl;

  return 0;
 }                                   