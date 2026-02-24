#include<iostream>
using namespace std;

int main()
{
     int decnum, ans = 0, rem, pow=1;
     cout<<"Enter a decimal number: ";
     cin>>decnum;
     
     while(decnum>0){
       rem = decnum%2;
       decnum = decnum/2;
       
       ans += rem*pow;
       pow *= 10;
     }
      cout<<"The binary number is: "<<ans;
      return 0;
}