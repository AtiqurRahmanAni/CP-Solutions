#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi 2*acos(0.0)
#define MOD 1000000007
#define N 100001
#define SZ 100000
int main()
{
    ll n;
    int t,j;
    cin>>t;
    for(int test=1; test<=t; test++)
    {
        cin>>n;
        ll sum=0;
        while(n!=0)
        {
            sum+=n;
            n/=2;
        }
        cout<<sum<<endl;
    }
    return 0;
}