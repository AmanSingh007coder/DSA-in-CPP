                                     // Pointer Arithmetic

 #include<iostream>
 using namespace std;
 
 int main()
 {
  int a = 10;
  int* ptr = &a;

  int* pt1;
  int* pt2;

  cout << "Value of a: " << a << endl; 
  cout << "Address of a: " << ptr << endl;
  cout << "Addition of 1 to the pointer: " << ++ptr << endl;
  cout << "Subtraction of 1 from the pointer: " << --ptr << endl;


  // subtract
  cout<<"first pointer: "<<pt1<<endl;
  cout<<"second pointer: "<<pt2<<endl;

  cout<<"Difference of two pointers: "<<pt1-pt2<<endl;

  //comparison
  cout<<"comparison is: "<<(pt1>pt2)<<endl;
  cout<<"equality is: "<<(pt1==pt2)<<endl;
  cout<<"inequality is: "<<(pt1!=pt2)<<endl;

  return 0;
 }