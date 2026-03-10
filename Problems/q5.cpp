                                                 // Aggresive Cow Problem

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


bool ispossible(vector<int> arr, int n, int c, int min_allowed_dist){
  int cows = 1, last_pos = arr[0];

  for(int i=1; i<n; i++){
     if(arr[i] - last_pos >= min_allowed_dist){
          cows++;
          last_pos = arr[i];
      }
      if(cows == c){
        return true;
      }
  }
  return false;
}

int cow_alloc(vector<int> arr, int n, int c){

   sort(arr.begin(), arr.end());
 
  if(c>n){
    return -1;
  }

  int start = 1, end = arr[n-1] - arr[0], ans;

  while(start<=end){
    int mid = (start) + (end-start)/2;

    if(ispossible(arr, n, c, mid)){
      ans = mid;
      start = mid+1;
    }
    else{
      end = mid-1;
    }
  }
  return ans;
}


int main()
{
   vector<int> arr = {1,2,8,4,9};
   int n = 5;      // no. of stalls
   int c = 3;     // no. of cows

   int res = cow_alloc(arr, n, c);

   cout<<res;
  return 0;
}