#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,k,i,x,cnt=0,y=0;
   cin>>n>>k;
   x=240-k;
   for(i=1;i<=n;i++)
   {
       y+=5*i;
       if(y<=x)
        cnt++;
   }
   cout<<cnt<<endl;
   return 0;
}