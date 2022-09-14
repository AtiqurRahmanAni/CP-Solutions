#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t,n,k,i,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        map<int,int>mp;
        for(i=0; i<n; i++)
        {
            cin>>x;
            mp[x%k]++;
        }
        ll ans=0;
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->first==0)
                continue;
            ans=max(ans,it->second*1LL*k-it->first);
        }
        if(ans==0)
            cout<<0<<endl;
        else
            cout<<ans+1<<endl;
    }
    return 0;
}