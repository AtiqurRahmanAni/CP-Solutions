#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
#include<set>
#include<iterator>
#include <map>
#include<cmath>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
typedef long long ll;
using namespace std;
int main()
{
    fastIO
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    
    ll s,p;
    cin>>s>>p;
    int flag=0;
    for (ll i = 1; i*i <=p; i++)
    {
        if(p%i==0)
        {
            ll x=p/i;
            // cout<<i<<" "<<x<<endl;
            if(x+i==s)
            {
                flag=1;
                break;
            }
        }
    }
    if(!flag)
    {
        cout<<"No\n";
    }
    else
    {
        cout<<"Yes\n";
    }
    return 0;
}
