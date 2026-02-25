                                         // Smallest element in an array


#include<iostream>
using namespace std;
int main()
{
     int a[20], n, smallest = 999999999;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        if(a[i] < smallest)
        {
            smallest = a[i];
        }
    }
    cout<<"Smallest element in the array is: "<<smallest<<endl;
    return 0;
}