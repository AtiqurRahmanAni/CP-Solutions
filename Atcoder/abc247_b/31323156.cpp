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

    int n;
    cin >> n;
    vector<pair<string, string>> vec(n);
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i].first >> vec[i].second;
        mp[vec[i].first]++;
        mp[vec[i].second]++;
    }
    bool ok = true;
    for(auto p : vec)
    {
        if(p.first == p.second && mp[p.first] > 2)
        {
            ok = false;
            break;
        }
        if (p.first != p.second && mp[p.first] > 1 && mp[p.second] > 1)
        {
            ok = false;
            break;
        }
    }
    cout << (ok ? "Yes" : "No") << endl;
    return 0;
}
