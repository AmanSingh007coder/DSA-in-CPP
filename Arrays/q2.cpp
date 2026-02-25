                                         // Largest element in an array


#include<iostream>
using namespace std;
int main()
{
     int a[20], n, largest = 0, i, index;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int j=0;j<n;j++)
    {
        cin>>a[j];
    }

    for(i=0;i<n;i++)
    {
        if(a[i] > largest)
        {
            largest = a[i];
            index = i;
        }
    }
    cout<<"Largest element in the array is: "<<largest<<" at index "<<index<<endl;
    return 0;
}