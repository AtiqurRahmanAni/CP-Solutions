#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,m,i;
    cin>>n>>m;
    ll ara[n+5];
    bool ara1[n+5];
    for(i=1;i<=n;i++)
    {
        cin>>ara[i];
        ara1[i]=false;
    }
    long ans=0;
    int a,b;
    for(i=1;i<=m;i++)
    {
        cin>>a>>b;
        if(ara[a]<ara[b])
            ara1[a]=true;
        else if(ara[b]<ara[a])
            ara1[b]=true;
        else
        {
            ara1[a]=true;
            ara1[b]=true;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(ara1[i]==false)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
