#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a,b;
ll solve(ll n,vector<int>vec)
{
    ll ans=(n/(a*b))*vec.size()+(upper_bound(vec.begin(),vec.end(),n%(a*b))-vec.end());
    return ans;
}
int main()
{
    int t,q;
    ll l,r;
    cin>>t;
    while(t--)
    {
        vector<int>vec;
        cin>>a>>b>>q;
        for(int i=0;i<a*b;i++)
        {
            if((i%a)%b!=(i%b)%a)
                vec.push_back(i);
        }
        while(q--)
        {
            cin>>l>>r;
            cout<<solve(r,vec)-solve(l-1,vec)<<' ';
        }
        puts("");
    }
    return 0;
}