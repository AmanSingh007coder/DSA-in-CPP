                                               // Butterfly Pattern of Stars

#include<iostream>
using namespace std;
int main()
{
    int n = 4;
    cout<<"Enter the Value of n: ";
    cin>>n;
    for(int i=0;i<n;i++)  // up-side
    {
        for(int j=0;j<i+1;j++) //star
        {
            cout<<"*";
        }
        for(int k=0;k<n-i-1;k++) //space
        {
            cout<<' ';
        }
        
        for(int k=0;k<n-i-1;k++) //space
        {
            cout<<' ';
        }

        for(int j=0;j<i+1;j++) //star
        {
            cout<<"*";
        }
        cout<<endl;
    }



     for(int i=0;i<n;i++)  // down-side
    {
        for(int j=0;j<n-i;j++) //star
        {
            cout<<"*";
        }
        for(int k=0;k<i;k++) //space
        {
            cout<<' ';
        }
        
        for(int k=0;k<i;k++) //space
        {
            cout<<' ';
        }
        for(int j=0;j<n-i;j++) //star
        {
            cout<<"*";
        }

        cout<<endl;
    }
    
}