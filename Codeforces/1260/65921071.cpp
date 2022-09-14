#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    //freopen("test.txt","r",stdin);
    int radiator,section,t,i;
    ll ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&radiator,&section);
        ll ara[radiator];
        memset(ara,0,sizeof(ara));
        for(i=0;i<section;i++)
        {
            ara[i%radiator]++;
        }
        ans=0;
        for(i=0;i<radiator;i++)
        {
            ans+=ara[i]*ara[i];
        }
        printf("%lld\n",ans);
    }
    return 0;
}