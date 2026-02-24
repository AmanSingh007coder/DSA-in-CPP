#include<iostream>
using namespace std;

int main()
{
     int binnum, ans = 0, rem, pow=1;
     cout<<"Enter a binary number: ";
     cin>>binnum;
     
     while(binnum>0){
       rem = binnum%10;
       binnum = binnum/10;
       
       ans += rem*pow;
       pow *= 2;
     }
      cout<<"The decimal number is: "<<ans;
      return 0;
}