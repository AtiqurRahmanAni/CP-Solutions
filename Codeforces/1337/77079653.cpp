#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ans;
void solve(vector<ll>r,vector<ll>g,vector<ll>b)
{
    for(auto x:r)
    {
        auto y=lower_bound(g.begin(),g.end(),x);
        auto z=upper_bound(b.begin(),b.end(),x);
        if(y==g.end() || z==b.begin())
            continue;
        z--;
        ans=min(ans,((ll)((x-*y)*(x-*y))+(ll)((*y-*z)*(*y-*z))+(ll)((*z-x)*(*z-x))));
    }
}
int main()
{
    int t,nr,ng,nb,i;
    cin>>t;
    while(t--)
    {
        vector<ll>r,g,b;
        cin>>nr>>ng>>nb;
        ll x;
        for(i=0;i<nr;i++)
        {
            cin>>x;
            r.push_back(x);
        }
        for(i=0;i<ng;i++)
        {
            cin>>x;
            g.push_back(x);
        }
        for(i=0;i<nb;i++)
        {
            cin>>x;
            b.push_back(x);
        }
        ans=10e18;
        sort(r.begin(),r.end());
        sort(g.begin(),g.end());
        sort(b.begin(),b.end());
        solve(r,g,b);
        solve(r,b,g);
        solve(g,r,b);
        solve(g,b,r);
        solve(b,g,r);
        solve(b,r,g);
        cout<<ans<<endl;
 
    }
    return 0;
}