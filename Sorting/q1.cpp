                                                     // Bubble Sort

#include<iostream>
using namespace std;

int main()
{
  int arr[] = {4,8,1,7,3,5};
  int n = 6;

 for(int i=0;i<n-1;i++){
  bool isSwapped = false;
 
  for(int j=0;j<n-i-1;j++){

      if(arr[j]>arr[j+1]){
        swap(arr[j], arr[j+1]);
        isSwapped = true;
      }

  }

    if(isSwapped == false){
    break;
     }

 }

 for(int i=0; i<n;i++){
  cout<<arr[i]<<" ";
 }

  return 0;
}                                         