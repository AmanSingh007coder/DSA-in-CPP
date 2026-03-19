

                                                   // Introduction to Strings.

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

  string str = "Aman Kumar Singh";
  cout<<str<<endl;

  cout<<str.length()<<endl;

  reverse(str.begin(), str.end());             // To reverse a string
  cout<<str<<endl;



  string str1 = "cat";
  string str2 = "meow";

  string str3 = str1 + str2;
  cout<<str3<<endl;

  cout<<(str1 == str2)<<endl;
  cout<<(str1 != str2)<<endl;
  cout<<(str1 > str2)<<endl;
  cout<<(str1 < str2)<<endl;

  string s1;


  cout<<"Enter a string: ";
  getline(cin, s1);          // string input
  cout<<s1<<endl;

  return 0;

}