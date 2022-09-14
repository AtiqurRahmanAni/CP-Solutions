#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,b,ans;
    cin>>n;
    for(ll i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if((i*(n/i))/(__gcd(i,n/i))==n)
            {
                ans=i;
            }
        }
    }
    cout<<ans<<' '<<n/ans<<endl;
    return 0;
}