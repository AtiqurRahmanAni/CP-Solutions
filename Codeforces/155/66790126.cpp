#include<bits/stdc++.h>
using namespace std;
int main()
{
   int ara[10005],i,j,best,worst,cnt=0,n;
   cin>>n;
   for(i=0;i<n;i++)
      cin>>ara[i];
      best=ara[0];
      worst=ara[0];
   for(i=1;i<n;i++)
   {
       if(ara[i]>best)
       {
           best=ara[i];
           cnt++;
       }
       if(ara[i]<worst)
       {
           cnt++;
           worst=ara[i];
       }
   }
   cout<<cnt<<endl;
   return 0;
}