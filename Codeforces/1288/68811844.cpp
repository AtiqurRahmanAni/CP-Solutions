#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll a,b,t;
    cin>>t;
    while(t--)
    {
        int flag=0;
        cin>>a>>b;
        int cnt=0;
        ll x=9;
        while(1)
        {
            if(x>b)
                break;
            cnt++;
            x*=10;
            x+=9;
        }
        cout<<cnt*a<<endl;
    }
    return 0;
}