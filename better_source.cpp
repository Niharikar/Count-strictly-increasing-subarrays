#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Count(int a[],int n)
{
int count = 0;
  int len = 1;
  for(int i = 0;i<n-1;i++)
  {
    if(a[i+1] > a[i])
    {
      len++:
    }
    
    else
    {
      count += ((len-1)*len)/2;
      len = 1;
    }
  }
  
  if(len>1)
    count += ((len-1)*len)/2;
    
   return count;
}


int main()
{
  int arr[] = {1,2,2,4};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout << Count(arr,n);
}
