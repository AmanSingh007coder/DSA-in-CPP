#include<iostream>
using namespace std;

int factofn(int n)
{
    int fact = 1;
    if(n == 0 || n == 1)
        return 1;
    for(int i=1; i<=n; i++){
      fact *= i;
    }   
    return fact;
}

int main()
{
     int n, res;
      cout<<"Enter a number: ";
      cin>>n;
      res = factofn(n);
      cout<<"The factorial of "<<n<<" is: "<<res;
      return 0;

}