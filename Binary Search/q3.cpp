                                        // binary search with recursion 

#include<iostream>
using namespace std;

int binarysearch(int a[], int low, int high, int key)
{
    int mid = low + (high - low) / 2;

    if (a[mid] == key){
        return mid;
    }
    else if (a[mid] < key){
        return binarysearch(a, mid + 1, high, key);
    }
    else if (a[mid] > key){
        return binarysearch(a, low, mid - 1, key);
    }
    else{
        return -1;
    }
}

int main()
{ 
    int a[] = {1, 2, 3, 4, 5}, n = 5, key = 3;
    int result = binarysearch(a, 0, n - 1, key);

    if (result == -1)
       cout << "Element not found in the array.";
    else
        cout << "Element found at index: " << result;      

    return 0;
} 