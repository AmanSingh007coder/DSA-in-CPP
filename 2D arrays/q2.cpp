                                          // linear search in a 2D array.

#include<iostream>
using namespace std;

bool linearlySearch(int matrix[][2], int row, int col, int key){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(matrix[i][j] == key){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int matrix[2][2] = {{1,2},{3,4}};
    int row = 2, col = 2;

    cout << linearlySearch(matrix, row, col, 3) << endl;

    return 0;
}