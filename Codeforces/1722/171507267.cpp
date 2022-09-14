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
const int mod = 1e9 + 7;
 
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
void printVec(vector<bool> &vec)
{
    for (int x : vec)
    {
        cout << x << " ";
    }
    line;
}
void printVec(vector<string> &vec)
{
    for (string x : vec)
    {
        cout << x << endl;
    }
    line;
}
bool check(vector<int> vec)
{
    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i - 1] > vec[i])
        {
            return false;
        }
    }
    return true;
}
void println(int x)
{
    cout << x << endl;
}
void println(string x)
{
    cout << x << endl;
}
 
ll arr[1111][1111];
ll pref[1111][1111];
 
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
        memset(arr, 0ll, sizeof(arr));
        memset(pref, 0ll, sizeof(pref));
 
        int n, q, a, b;
        ll ans = 0;
        cin >> n >> q;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            arr[a][b] += (a * b);
        }
 
        for (int i = 1; i <= 1000; i++)
        {
            for (int j = 1; j <= 1000; j++)
            {
                pref[i][j] = pref[i - 1][j] + pref[i][j - 1] + arr[i][j] - pref[i - 1][j - 1];
            }
        }
 
        int hs, ws, hb, wb;
        for (int i = 0; i < q; i++)
        {
            cin >> hs >> ws >> hb >> wb;
            ans = pref[hb - 1][wb - 1] - pref[hb - 1][ws] - pref[hs][wb - 1] + pref[hs][ws];
            cout << ((ans < 0) ? 0 : ans) << endl;
        }
    }
 
    return 0;
}