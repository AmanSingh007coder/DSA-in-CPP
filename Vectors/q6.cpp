                                                // pair sum brute force

#include<iostream>
using namespace std;
int main()
{    
      int a[] = {1,2,3,4,5};
      int n = 5;
      int target = 7;

      for(int i=0;i<n;i++)
      {
         int pairsum = 0;
         for(int j=i+1;j<n;j++)
         {
            pairsum = a[i]+a[j];
            if(pairsum == target)
            {
                cout<<"The pair is: "<<a[i]<<" and "<<a[j]<<endl;
            }
          }
      }

    return 0;
}