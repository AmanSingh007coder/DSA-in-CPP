                                         // Sum and Product of all elements in an array

#include<iostream>
using namespace std;
int main()
{
     int a[20], n, sum=0, prod=1;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
       sum += a[i];
    }
    cout<<"Sum of all elements in the array is: "<<sum<<endl;

    for(int i=0;i<n;i++)
    {
       prod *= a[i];
    }
    cout<<"Product of all elements in the array is: "<<prod<<endl;
    return 0;
}