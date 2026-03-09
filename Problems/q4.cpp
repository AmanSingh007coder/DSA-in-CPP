                                      // painter partition algorithm

#include<iostream>
#include<vector>
using namespace std;


bool isValid(vector<int> a, int n, int m, int max_allowed_time){
  int painter = 1, time = 0;

  for(int i=0; i<n; i++){
      if(a[i]>max_allowed_time){
        return false;
      }

      if(time + a[i] <= max_allowed_time){
        time += a[i];
      }
      else{
        painter++;
        time = a[i];
      }
  }
    if(painter>m){
        return false;
      }
      else{
        return true;
      }
}

int painter_alloc(vector<int> a, int n, int m){
  int sum = 0;

  if(m>n){
    return -1;
  }

  for(int i=0; i<n; i++){
    sum += a[i];
  }

  int start = 0, end = sum, ans;

  while(start<=end){
    int mid = (start) + (end-start)/2;

    if(isValid(a, n, m, mid)){
      ans = mid;
      end = mid-1;
    }
    else{
      start = mid+1;
    }
  }
  return ans;
}


int main()
{
   vector<int> a = {40,30,10,20};
   int n = 4;
   int m = 2;     // painter

   int res = painter_alloc(a, n, m);

  cout<<res;
  return 0;
}