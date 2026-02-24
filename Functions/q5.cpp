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

int nCr(int n, int r){
  int factn = factofn(n);
  int factr = factofn(r);
  int factnr = factofn(n-r);
  return factn/(factr*factnr);
}

int main()
{
      int n = 5, r = 3;
      nCr(n,r);
      cout<<"The nCr is: "<<nCr(n,r)<<endl;

      return 0;

}