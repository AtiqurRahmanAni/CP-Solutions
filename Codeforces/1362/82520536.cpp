#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi 2*acos(0.0)
#define MOD 1000000007
#define N 100001
#define SZ 100000
int main()
{
    ll a,b;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        ll ans=0;
        if(a>b)
            swap(a,b);
        if(b>=a)
        {
            while(a*8<=b)
            {
                if(a==b)
                    break;
                a*=8;
                ans++;
            }
            while(a*4<=b)
            {
                if(a==b)
                    break;
                a*=4;
                ans++;
            }
            while(a*2<=b)
            {
                if(a==b)
                    break;
                a*=2;
                ans++;
            }
        }
        if(a!=b)
            cout<<-1<<endl;
        else
            cout<<ans<<endl;
 
    }
    return 0;
}