
                                                // book allocation Algorithm

#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> a, int n, int m, int max_allowed_pages){        // mid = max_allowed_pages
   int stu = 1, pages = 0;

   for(int i = 0; i<n; i++){
    if(a[i]>max_allowed_pages){
      return false;
    }

    if(pages + a[i] <= max_allowed_pages){
      pages += a[i];
    }
    else{
      stu++;
      pages = a[i];
    }
   }

   if(stu>m){
    return false;
   }
   return true;

}

int allocate_books(vector<int> a, int n, int m){

  if(m>n){
     return -1;
  }

int sum = 0;

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
  vector<int> a = {2,1,3,4};
  int n = 4;   // no. of books
  int m = 2;   // no. of students

   int res = allocate_books(a, n, m);
   cout<<res;

  return 0;
}