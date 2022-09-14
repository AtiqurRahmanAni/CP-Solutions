#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
long long a[200005],b[200005],c[200005];
int main()
{
    int n,k,x,op=1,i;
    cin>>n>>k>>x;
    for(i=1;i<=k;i++)
        op*=x;
    for(i=1;i<=n;i++)
        cin>>c[i];
    a[1]=c[1];
    b[n]=c[n];
    for(i=1;i<=n;i++)
    {
        a[i]=c[i]|a[i-1];
    }
    for(i=n-1;i>=1;i--)
    {
        b[i]=c[i]|b[i+1];
    }
    ll ans=0;
    for(i=1;i<=n;i++)
    {
        ans=max(ans,(a[i-1]|b[i+1]|(op*c[i])));
    }
    cout<<ans<<endl;
    return 0;
}