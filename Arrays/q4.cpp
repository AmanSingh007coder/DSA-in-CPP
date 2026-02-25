                                           // Linear Search in an array

#include<iostream>
using namespace std;
int main()
{
     int a[20], n, target;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int j=0;j<n;j++)
    {
        cin>>a[j];
    }

    cout<<"Enter the target element: ";
    cin>>target;

    for(int i=0;i<n;i++)
    {
        if(a[i] == target)
        {
            cout<<"Target element found at index: "<<i<<endl;
            return 0;
        }
    }
    cout<<"Target element not found in the array."<<endl;
    return 0;
}