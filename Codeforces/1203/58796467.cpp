#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    else
        gcd(b,a%b);
}
int main()
{
    ll n,i,GCD=0,x,cnt=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        GCD=gcd(GCD,x);
    }
    for(i=1;i<=sqrt(GCD);i++)
    {
        if(GCD%i==0)
        {
            if(GCD/i==i)
                cnt++;
            else
                cnt+=2;
        }
    }
    cout<<cnt<<endl;
    return 0;
}