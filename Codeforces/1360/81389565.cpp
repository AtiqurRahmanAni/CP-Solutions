#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi 2*acos(0.0)
#define MOD 1000000007
#define N 100001
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,i,j,t1,t2,ans=0;
        cin>>n>>k;
        for(i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                if(n/i<=k)
                {
                    ans=max(ans,n/i);
                }
                t1=n/i;
                if(n/t1<=k)
                {
                    ans=max(ans,n/t1);
                }
            }
        }
        if(ans==0)
            ans=1;
        cout<<n/ans<<endl;
    }
    return 0;
}