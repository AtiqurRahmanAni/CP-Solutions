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

    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    int diff = abs(a - b);
    if (a > b)
    {
        if (x <= y)
        {
            ll aa = x + (diff - 1) * y;
            ll bb = (diff * x) + ((diff - 1) * x);
            cout << min(aa, bb) << endl;
        }
        else
        {
            cout << x + (diff * y) << endl;
        }
    }
    else if (a == b)
    {
        cout << x << endl;
    }
    else
    {
        ll aa = x+(diff*2*x);
        cout << min(aa,(diff * y) + x )<< endl;
    }

}
