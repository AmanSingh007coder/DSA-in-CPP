                                          // Kadane's Algorithm

#include<iostream>
using namespace std;
int main()
{    
      int a[] = {3,-4,5,4,-1,7,-8};
      int n = 7;
      int maxsum = INT64_MIN;
      int cursum = 0;

      for(int i=0;i<n;i++)
      {
        cursum+=a[i];
        maxsum = max(maxsum, cursum);
        if(cursum < 0)
        {
            cursum = 0;
        }
      }
      cout<<"The maximum subarray sum is: "<<maxsum<<endl;

    return 0;
}