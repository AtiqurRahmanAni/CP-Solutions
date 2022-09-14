#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int  maxi=INT_MIN,n,m,i,j,ans=0;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    cin>>m;
    int arb[m];
    for(i=0;i<m;i++)
    {
        cin>>arb[i];
    }
    map<int,int>mp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(floor(arb[j]/(ara[i]*1.0))==ceil(arb[j]/(ara[i]*1.0)))
            {
                if(arb[j]/ara[i]>maxi)
                    maxi=arb[j]/ara[i];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(ara[i]==-1)
            continue;
        for(j=0;j<m;j++)
        {
            if(arb[j]==-1)
            continue;
            if(floor(arb[j]/(ara[i]*1.0))==ceil(arb[j]/(ara[i]*1.0)))
            {
                if(arb[j]/ara[i]==maxi)
                {
                    ans++;
                    ara[i]=arb[j]=-1;
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}