#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,i,x,q;
    cin>>n;
    map<int,int>mp;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        mp[x]=i;
    }
    cin>>q;
    ll sum1=0,sum2=0;
    while(q--)
    {
        cin>>x;
        sum1+=mp[x];
        sum2+=n-mp[x]+1;
    }
    cout<<sum1<<" "<<sum2<<endl;
    return 0;
}