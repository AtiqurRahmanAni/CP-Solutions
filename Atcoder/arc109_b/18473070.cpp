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
#include <functional>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
typedef long long ll;
typedef long long ull;
ll MOD = 1000000007;
using namespace std;
int fx[] = {1, -1, 0, 0};
int fy[] = {0, 0, -1, 1};
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ull n;
    cin >> n;
    ll l=0;
    ll r=2e9;
    while(r-l>1)
    {
        ll mid=(l+r)>>1;
        if(((mid*(mid+1))/2)>n+1)
        {
            r=mid;
        }
        else
        {
            l=mid;
        }
    }
    cout << n - l + 1 << endl;

}
