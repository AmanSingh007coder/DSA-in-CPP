                                         // Find the maximum row sum in a 2D array.

#include<iostream>
using namespace std;

int maxrowsum(int matrix[][2], int row, int col){
    int maxSum = 0;
    for(int i = 0; i < row; i++){
      int rowsum = 0;
        for(int j = 0; j < col; j++){
            rowsum += matrix[i][j];
        }

        maxSum = max(maxSum, rowsum);
    }
    return maxSum;
}

int main(){
    int matrix[2][2] = {{1,2},{3,4}};
    int row = 2, col = 2;

    cout << maxrowsum(matrix, row, col) << endl;

    return 0;
}