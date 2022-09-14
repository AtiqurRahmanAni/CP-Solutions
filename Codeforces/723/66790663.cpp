#include<bits/stdc++.h>
using namespace std;
int main()
{
   int ara[3],i,mini=INT_MAX,ans;
   cin>>ara[0]>>ara[1]>>ara[2];
   sort(ara,ara+3);
   for(i=ara[0];i<=ara[2];i++)
   {
        if((abs(i-ara[0])+abs(i-ara[1])+abs(i-ara[2]))<mini)
        {
            mini=abs(i-ara[0])+abs(i-ara[1])+abs(i-ara[2]);
            ans=i;
        }
   }
   cout<<mini<<endl;
   return 0;
}