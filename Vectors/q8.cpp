                                 // majority element in an array - Brute force approach (On^2)

#include<iostream>
using namespace std;
int main()
{    
      int a[] = {1,2,3,2,2};
      int n = 5, i, j;
      int halfsize = n/2;

      for ( i = 0; i < n; i++)
      {
        int count = 0;
       for ( j = 0; j < n; j++)
       {
        if(a[i] == a[j])
        {
          count++;
        }
       }
       if(count > halfsize)
       {
        cout<<"The majority element is: "<<a[i]<<endl;
        return 0;
       }
      }
      
    return 0;
}