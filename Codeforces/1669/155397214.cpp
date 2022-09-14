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
#include <bitset>
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
void printVec(vector<int> &vec)
{
    for (int x : vec)
    {
        cout << x << " ";
    }
    line;
}
 
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
        freopen("inputf.txt", "r", stdin);
#endif
 
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x;
        cin >> n >> m;
        vector<bitset<31>> vec(n);
 
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            bitset<31> b(x);
            vec[i] = b;
        }
        ll ans = 0;
        for (int i = 30; i >= 0; i--)
        {
            int need = 0;
            for (int j = 0; j < n; j++)
            {
                if(vec[j][i] == 0)
                {
                    need++;
                }
            }
            if(need <= m)
            {
                ans += (1 << i);
                m -= need;
            }
        }
 
        cout << ans << endl;
        // line;
    }
    return 0;
}