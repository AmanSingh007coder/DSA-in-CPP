#include<iostream>
using namespace std;

int sum(int a, int b)
{
    a = 20, b=50;
    return a+b;
}

int main()
{
      int a = 10,b = 15;
      sum(a,b);
      cout<<"The sum is: "<<sum(a,b)<<endl;

      cout<<a<<endl;
      cout<<b<<endl;
      return 0;

}