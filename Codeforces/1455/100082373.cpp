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
 
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        int flag;
        cin >> n >> x;
        vector<int>ara;
        for (int i = 0; i < n; i++)
        {
            cin >> y;
            ara.push_back(y);
        }
        int ans = 0;
        if (is_sorted(ara.begin(), ara.end()))
        {
            cout << 0 << endl;
            continue;
        }
        flag = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (ara[i] > x)
            {
                swap(ara[i], x);
                ans++;
            }
            if (is_sorted(ara.begin(), ara.end()))
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}