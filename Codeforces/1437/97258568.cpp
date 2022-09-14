#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
using namespace std;
int main()
{
    fastIO
 
    int l,r,t;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        double x=(r+1)/2.0;
        //cout<<x<<endl;
        if(x<=l && x<=r)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}