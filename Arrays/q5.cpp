                                                // Reverse an array


#include<iostream>
using namespace std;
int main()
{ 
     int n, arr[20];
    cout<<"Enter the size of the array: ";
    cin>>n;
    int start = 0, end = n-1;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

      while(start <= end)
      {
          swap(arr[start], arr[end]);
          start++;
          end--;
      }
  
      cout<<"Reversed array: ";
      for(int i=0;i<n;i++)
      {
          cout<<arr[i]<<" ";
      }
    return 0;
}