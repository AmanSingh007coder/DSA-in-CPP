#include<iostream>
using namespace std;

int fiboofn(int n)
{
  int fib = 0;
  if(n == 0)
    return 0;
  else if(n == 1 || n == 2)
    return 1;
  else
    return fiboofn(n-1) + fiboofn(n-2);
}

int main()
{
     int n, res;
      cout<<"Enter a number: ";
      cin>>n;
      res = fiboofn(n);
      cout<<"The fibbonaci of term "<<n<<" is: "<<res;
      return 0;

}