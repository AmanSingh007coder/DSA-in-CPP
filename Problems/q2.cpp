                        // C++ program to find the product of array elements except self - Brute Force Approach

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int ans[20];
  int a[] = {1, 2, 3, 4, 5}, n = 5;

  for (int i = 0; i < 5; i++)
  {
    ans[i] = 1;
    for (int j = 0; j < 5; j++)
    {
      if (i != j)
      {
        ans[i]*= a[j];
      }
    }
  }

  for(int k = 0; k < 5; k++)
  {
    cout << ans[k] << " ";
  }

  return 0;
}