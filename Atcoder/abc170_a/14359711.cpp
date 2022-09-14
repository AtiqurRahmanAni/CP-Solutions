#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi 2*acos(0.0)
#define MOD 1000000007
#define N 100001
#define SZ 100000
int main()
{
    ll n,ans=0,i,temp=1;
    map<ll,int>mp;
    cin>>n;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            temp=i;
            //cout<<i<<" ";
            while(n%temp==0)
            {
                ans++;
                n/=temp;
                //cout<<temp<<" ";
                temp*=i;
            }
        }
        if(n%i==0)
        {
            while(n%i==0)
            {
                n/=i;
            }
        }
    }
    //puts("");
    if(n>1)
        ans++;
    //cout<<n<<endl;
    cout<<ans<<endl;
    return 0;
}
