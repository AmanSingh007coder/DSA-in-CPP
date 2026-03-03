                                               // Binary Search in C++

#include<iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5}, n = 5, key = 3;
    int low = 0, high = n - 1, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == key)
        {
            cout << "Element found at index: " << mid;
            return 0;
        }
        else if (a[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << "Element not found in the array.";
    return 0;
}                                           