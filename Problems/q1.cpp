                                 //to find the maximum water that can be contained - Brute Force Approach

#include<iostream>
using namespace std;

int main()
{
    int area, a[] = {1,8,6,2,5,4,8,3,7}, n = 9, max_water = 0;
    for(int i=0; i<n; i++)
     for(int j=i+1; j<n; j++)
        {
            area = min(a[i], a[j]) * (j - i);
            max_water = max(max_water, area);
        }
    cout<<"max water that can be contained is: "<<max_water;
    return 0;
}