#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 2019
#define pi 2*acos(0.0)
int main()
{
    int t,n,k,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ll cnt=0;
        for(i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                cnt=1;
                break;
            }
        }
        n+=i;
        ll rem=k-cnt;
        if(n%2==0)
        {
            cout<<n+(rem*2)<<endl;
        }
 
    }
    return 0;
}