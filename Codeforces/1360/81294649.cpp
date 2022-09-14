#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi 2*acos(0.0)
#define MOD 1000000007
#define N 100001
int main()
{
    int t,i,j;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        if(k>=n)
            cout<<1<<endl;
        else
        {
            int flag=0;
            for(j=2; j<=sqrt(n); j++)
            {
                if(n%j==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                cout<<n<<endl;
            else
            {
                ll ans=0,r1=0,r2=0;
                for(j=1; j<=sqrt(n); j++)
                {
                    if(n%j==0 && j<=k)
                    {
                        r1=j;
                        if(n/j<=k)
                            r2=n/j;
                        ans=max(ans,(max(r1,r2)));
                    }
                }
                cout<<n/ans<<endl;
            }
        }
    }
    return 0;
}