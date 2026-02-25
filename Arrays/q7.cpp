                                        // Print all unique elements in an array

#include<iostream>
using namespace std;

int main()
{ 
    int a[20], n, count;
    cout<<"Enter the size of the array: ";
    cin>>n;

    cout<<"Enter the elements of the array: ";
    for(int j=0;j<n;j++)
    {
        cin>>a[j];
    }

    for(int i=0;i<n;i++)
    {
        count = 0;  

        for(int j=0;j<n;j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }

        if(count == 1)
        {
            cout<<a[i]<<" ";
        }
    }

    return 0;
}