                                             // Take input and print a 2D array.

#include<iostream>
using namespace std;

int main(){
     
    int matrix[20][20];
    int row, col;
    cout << "Enter the number of rows and columns: ";
    cin >> row >> col;
    cout << "Enter the elements of the matrix: ";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> matrix[i][j];
        }
    }
    cout << "The matrix is: " << endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}