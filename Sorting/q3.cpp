                                                 // Insertion Sort

#include<iostream>
using namespace std;

int main()
{
  int arr[] = {5,9,1,6,2,8};
  int n=6;  
  
  for(int i=1;i<n;i++){
    int cur = arr[i];
    int prev = i-1;

    while(prev>=0 && arr[prev]>cur){
      arr[prev+1] = arr[prev];
      prev--;
    }

    arr[prev+1] = cur;
    
  }

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  
 return 0; 
}