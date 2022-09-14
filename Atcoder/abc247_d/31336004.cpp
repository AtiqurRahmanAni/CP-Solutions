#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <set>
#include <iterator>
#include <map>
#include <cmath>
#include <list>
#include <string>
#include <stdlib.h>
#include <ctime>
#include <cstring>
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define PI 2 * acos(0.0)
#define inf 2e9
typedef long long ll;
typedef unsigned long long ull;
#define line cout << endl
using namespace std;
int fy[] = {0, 0, 1, -1};
int fx[] = {-1, 1, 0, 0};
using namespace std;

void prnt(int x)
{
    cout << x << endl;
}
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
        freopen("inputf.txt", "r", stdin);
#endif

    int t;
    cin >> t;
    deque<pair<ll, ll>> dq;
    while (t--)
    {
        int a, b, c;
        cin >> a;
        if (a == 1)
        {
            cin >> b >> c;
            dq.push_back({b, c});
        }
        else
        {
            ll ans = 0;
            cin >> b;
            // pair<ll, ll> p = dq.front();
            // dq.pop_front();
            while (true)
            {
                pair<ll, ll> p = dq.front();
                dq.pop_front();
                if (p.second >= b)
                {
                    int rem = p.second - b;
                    ans += b * p.first;
                    if (rem > 0)
                    {
                        dq.push_front({p.first, rem});
                    }
                    break;
                }
                else
                {
                    b -= p.second;
                    ans += p.second * p.first;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}
