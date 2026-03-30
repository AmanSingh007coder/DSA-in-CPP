                                    // Find the sum of primary diagonal elements in a 2D array.

#include<iostream>
using namespace std;

int main(){
    int n = 3, j=0;
    int arr[3][3] = {{1,2,3},
                     {4,5,6},
                     {7,8,9}};
    int diagsum = 0;                // primary diagonal sum
    for(int i=0; i<3; i++){
      if(i == j){
        diagsum += arr[i][j];
        j++;
      }
    }
    cout << diagsum << endl;
    return 0;
}