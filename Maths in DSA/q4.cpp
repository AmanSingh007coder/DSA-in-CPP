                                            // gcd and lcm of two numbers

#include<iostream>
using namespace std;


int gcd(int a, int b){
     while(a>0 && b>0){
         if(a>b){
             a = a%b;
         } else {
             b = b%a;
         }
     }
      if(a==0){
          return b;
      } else {
          return a;
      }
}

int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}

int main(){
  int n = 153;
   cout << gcd(20,28) << endl;
   cout << lcm(20,28) << endl;
  return 0;
}