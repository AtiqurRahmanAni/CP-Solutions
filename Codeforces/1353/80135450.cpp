#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    ll n;
    cin>>t;
    for(int test=1; test<=t; test++)
    {
        cin>>n;
        ll ans=0;
        ll four=4;
        ll x=2;
        for(int i=3; i<=n; i+=2)
        {
            ans+=(four*(i-1));
            four=4*x;
            x++;
        }
        cout<<ans<<endl;
    }
    return 0;
}