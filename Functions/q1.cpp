#include<iostream>
using namespace std;

int sumofn(int n)
{
    int sum = 0;
    for(int i=1; i<=n; i++)
        sum += i;
    return sum;
}

int main()
{
     int n, res;
      cout<<"Enter a number: ";
      cin>>n;
      res = sumofn(n);
      cout<<"The sum of first "<<n<<" natural numbers is: "<<res;
      return 0;

}