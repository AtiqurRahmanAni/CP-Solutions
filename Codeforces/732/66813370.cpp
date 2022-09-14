#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long k,r,i;
   cin>>k>>r;
   for(i=1; ;i++)
   {
       if((i*k)%10==0)
       {
           break;
       }
       if((i*k)%10==r)
       {
           break;
       }
   }
   cout<<i<<endl;
   return 0;
}