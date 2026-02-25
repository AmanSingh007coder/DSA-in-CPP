                                                // Pass by reference in arrays

#include<iostream>
using namespace std;

void changeArray(int a[])
{
     cout<<"function started"<<endl;
      for(int i=0;i<3;i++)
      {
          a[i] = a[i] + 10;
      }
}

int main()
{
     int a[] = {10,20,30};
     int size = 3;

     changeArray(a);

     cout<<"main function started"<<endl;
      for(int i=0;i<size;i++)
      {
          cout<<a[i]<<endl;
      }
    return 0;
}