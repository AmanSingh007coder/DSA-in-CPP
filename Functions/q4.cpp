#include<iostream>
using namespace std;

int main()
{
  int num,sum=0;
    cout<<"Enter a number: ";
    cin>>num;

    while(num>0)
    {
      int lastdig = num%10;
      num = num/10;
      sum+=lastdig;
    }
    cout<<"Sum of digits is: "<<sum<<endl;
    return 0;
}