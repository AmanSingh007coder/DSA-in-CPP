                                                // pair sum optimized approach (On)

#include<iostream>
using namespace std;
int main()
{    
      int a[] = {1,2,3,4,5};
      int n = 5;
      int target = 7;
      int i= 0;
      int j = n-1;

    while (i<j)
    {
      int pairsum = a[i]+a[j];
      if(pairsum > target)
      {
        j--;
      }
      else if(pairsum < target)
      {
        i++;
      }
      else
      {
        cout<<"The pair is: "<<a[i]<<" and "<<a[j]<<endl;
        return 0;
      }
      
    }
    

    return 0;
}