                                        // Sort of 0's, 1's and 2's - little optimized

#include<iostream>
using namespace std;

int main()
{
  int arr[] = {2,0,2,1,1,0,1,2,0,0};
  int n = 10;
  int count_0 = 0, count_1 = 0, count_2 = 0;

  for(int i=0; i<n; i++){
     if(arr[i] == 0){
        count_0++;
     }
     else if(arr[i] == 1){
        count_1++;
     }
     else{
        count_2++;
     }
  }

  for(int i=0; i<count_0; i++){
    arr[i] = 0;
  }

  for(int i=count_0; i<count_0 + count_1; i++){
    arr[i] = 1;
  }

  for(int i=count_0 + count_1; i<n; i++){
    arr[i] = 2;
  }

  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}