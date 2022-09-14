#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    ll a,b,x,y,ans;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        cin>>a>>b;
        if(x==y)
        {
            cout<<min((x*a+y*a),(x*b))<<endl;
        }
        else
        {
            ll diff=abs(x-y);
            ll mini=min(x,y);
            cout<<min((x*a+y*a),((diff*a)+(mini*b)))<<endl;
 
        }
    }
    return 0;
}