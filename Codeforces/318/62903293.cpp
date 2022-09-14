#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
   ll n,e,o,ans=1,i,m;
   cin>>n>>m;
   if(n%2==0)
   {
       e=n/2;
       o=e;
   }
   else
   {
       e=n/2;
       o=e+1;
   }
   if(m>o)
   {
       cout<<(m-o)*2<<endl;
   }
   else
   {
       for(i=2;i<=m;i++)
        ans+=2;
       cout<<ans<<endl;
   }
 
   return 0;
}