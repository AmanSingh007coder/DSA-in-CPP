                                          // Vectors in C++

#include<iostream>
#include<vector>
using namespace std;
int main()
{
      vector<int>vec = {1,2,3,4};
      vector<int>vec2(5,0);

      for(int i=0;i<vec.size();i++)
      {
          cout<<vec[i]<<" ";
      }

      cout<<endl;

      for(int i=0;i<vec2.size();i++)
      {
          cout<<vec2[i]<<" "<<endl;
      }

      // for each loop
      for(int val : vec)
      {
          cout<<val<<" ";
      }

    return 0;
}