#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    long long x,y,a,b,ans;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>a>>b;
        ll d=y-x;
        ll x=a+b;
        if(d<x)
            cout<<-1<<endl;
        else
        {
            if(d%x==0)
                cout<<d/x<<endl;
            else
                cout<<-1<<endl;
        }
    }
    return 0;
}
 