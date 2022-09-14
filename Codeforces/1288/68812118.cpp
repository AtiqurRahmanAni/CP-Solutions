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
        ll temp=b;
        ll cnt=0;
        while(b)
        {
            if(b%10!=9)
                flag=1;
            b/=10;
            cnt++;
        }
        if(flag==1)
            cnt--;
        cout<<cnt*a<<endl;
    }
    return 0;
}