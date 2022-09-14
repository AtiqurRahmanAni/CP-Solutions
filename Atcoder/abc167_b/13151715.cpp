#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b,c,k;
    cin>>a>>b>>c>>k;
    ll ans=0;
    if(a<=k)
    {
        ans+=a;
        k-=a;
    }
    else
    {
        ans+=k;
        k=0;
    }
    if(b<=k)
    {
        k-=b;
    }
    else
    {
        k=0;
    }
    if(c<=k)
    {
        ans+=(c*-1);
        k-=c;
    }
    else
    {
        ans+=(k*-1);
    }
    cout<<ans<<endl;
    return 0;
}
