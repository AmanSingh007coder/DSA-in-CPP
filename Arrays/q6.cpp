                                         // Swap the largest and smallest elements in an array

#include<iostream>
using namespace std;

int largest(int a[], int n)
{ 
      int largest = 0, index;
    for(int i=0;i<n;i++)
    {
        if(a[i] > largest)
        {
            largest = a[i];
            index = i;
        }
    }
    return index;
}

int smallest(int a[], int n)
{ 
    int smallest = 999999999, index;
    for(int i=0;i<n;i++)
    {
        if(a[i] < smallest)
        {
            smallest = a[i];
            index = i;
        }
    }
    return index;
}

int main()
{
     int a[20], n, max, min, i, index;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int j=0;j<n;j++)
    {
        cin>>a[j];
    }

      max = largest(a, n);
      min = smallest(a, n);
  
      cout<<"Largest element in the array is: "<<a[max]<<endl;
      cout<<"Smallest element in the array is: "<<a[min]<<endl;

      swap(a[max], a[min]);

    for(i=0;i<n;i++)
    {
       cout<<a[i]<<" ";
    }
    return 0;
}