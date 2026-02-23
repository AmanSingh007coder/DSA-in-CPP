                                             // Triangle Pattern of Numbers

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Value of n: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       int num = 1;
        for(int j=1;j<=i;j++)
        {
            cout<<num;
            num = num+1;
        }
        cout<<endl;
    }
}