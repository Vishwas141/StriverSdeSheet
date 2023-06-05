#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int a=0,b=0,c=0;
   for(int i=0;i<n;i++)
   {
      if(arr[i]==0)
       a++;
      if(arr[i]==1)
       b++;
      if(arr[i]==2)
       c++;
   }
   for(int i=0;i<n;i++)
   {
      if(i<a)
        arr[i]=0;
      else if(i>=a && i<(a+b))
        arr[i]=1;
      else
        arr[i]=2;
   }
}