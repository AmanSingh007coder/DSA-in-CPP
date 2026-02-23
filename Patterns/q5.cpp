                                             // Inverted Triangle Pattern of Numbers

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Value of n: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<=n-i;k++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}