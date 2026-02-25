                                             // Brute Force Approach - O(n^2)

#include<iostream>
using namespace std;
int main()
{    
      int a[] = {1,2,3,4,5};
      int n = 5;
      int maxsum = 0;

      for(int st=0;st<n;st++)
      {
        int cursum = 0;

        for(int end=st;end<n;end++)
        {
           cursum += a[end];
           maxsum = max(maxsum, cursum);
        }
      }
      cout<<"The maximum subarray sum is: "<<maxsum<<endl;
    return 0;
}