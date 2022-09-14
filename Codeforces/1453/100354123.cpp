#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
#include<set>
#include<iterator>
#include <map>
#include<cmath>
#include <list>
#include<string>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
#define line cout<<endl
typedef long long ll;
typedef long long ull;
ll MOD = 1000000007;
using namespace std;
int fx[] = {1, -1, 0, 0};
int fy[] = {0, 0, -1, 1};
ll sum(ll n, int &digit)
{
    digit = 0;
    ll su = 0;
    while (n != 0)
    {
        su += (n % 10);
        n /= 10;
        digit++;
    }
    return su;
}
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,ans=0;
        int x;
        set<int>st;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            st.insert(x);
        }
        for(int i=0;i<m;i++)
        {
            cin>>x;
            if(st.find(x)!=st.end())
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}