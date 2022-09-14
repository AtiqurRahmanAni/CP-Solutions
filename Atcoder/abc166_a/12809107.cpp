#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,k,i,j,x,y;
    cin>>n>>k;
    map<int,int>mp;
    for(i=1;i<=k;i++)
    {
        cin>>x;
        for(j=1;j<=x;j++)
        {
            cin>>y;
            mp[y]++;
        }
    }
    int ans=0;
    for(i=1;i<=n;i++)
    {
        if(mp[i]==0)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
