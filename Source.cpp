#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Count(int a[],int n)
{
  int ans = 0;
  for(int i = 0;ii<n;i++)
  {
    for(int j = i + 1;j<n;j++)
    {
      if(a[j] > a[j-1])
      {
        ans++;
      }
      
      else
        break;
    }
  }
  return ans;
}

int main()
{
  int arr[] = {1,2,2,4};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout << Count(arr,n);
}
