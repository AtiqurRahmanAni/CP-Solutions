#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool ara[1000005];
void sieve()
{
    int i,j,sq=sqrt(1000000);
    for(i=4;i<=1000000;i+=2)
    {
        ara[i]=1;
    }
    for(i=3;i<=sq;i+=2)
    {
        for(j=i*i;j<=1000000;j+=i)
        {
            if(ara[j]==0)
                ara[j]=1;
        }
    }
    ara[2]=1;
}
int main()
{
    int i,n;
    sieve();
    cin>>n;
    for(i=4; ;i++)
    {
       if(ara[i]==0)
        continue;
       if(ara[i]==1 && ara[n-i]==1)
       {
           printf("%d %d\n",i,n-i);
           break;
       }
    }
    return 0;
}