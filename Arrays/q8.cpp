                                         // Intersection of two arrays

#include<iostream>
using namespace std;
int main()
{
     int a[20], b[20], n1, n2, temp;
    cout<<"Enter the size of the first array: ";
    cin>>n1;
    cout<<"Enter the elements of the first array: ";
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter the size of the second array: ";
    cin>>n2;
    cout<<"Enter the elements of the second array: ";
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }

    for(int f=0; f<n1; f++)
    {
         temp = a[f];
        for(int s=0; s<n2; s++)
        {
           if(temp == b[s])
           {
               cout<<"Intersection: "<<temp<<" ";
           }
        }
    }
    return 0;
}