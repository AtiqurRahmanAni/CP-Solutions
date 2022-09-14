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
typedef long long ll;
typedef long long ull;
ll MOD = 1000000007;
using namespace std;
int fx[] = {1, -1, 0, 0};
int fy[] = {0, 0, -1, 1};
ll sum(ll n)
{
    return (n * (n + 1)) / 2;
}
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    int n, m;
    cin >> n >> m;
    int ara[m + 1];
    int b[m + 1];
    int x=n,y=n;
    for (int i = 1; i <= m; i++)
    {
        cin >> ara[i - 1];
        b[i - 1] = ara[i - 1];
    }
    ll ans1=0,ans2=0;
    int i=0;
    sort(ara,ara+m);
    while(x!=0)
    {
        ans1+=ara[i];
        ara[i]--;
        x--;
        if(ara[i]==0)
            i++;
    }
    i=0;
    while(y!=0)
    {
        sort(b,b+m,greater<int>());
        ans2+=b[i];
        b[i]--;
        y--;
        // if(b[i]==0)
        //     i++;
    }
    cout<<ans2<<" "<<ans1<<endl;
 
}