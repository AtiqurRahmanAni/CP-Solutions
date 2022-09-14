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
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
        freopen("inputf.txt", "r", stdin);
#endif
 
    // cout << -5 % 2 << endl;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x;
 
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            mp[x]++;
        }
 
        int len = mp.size();
        int ans = 0;
        int one = 0;
        bool two = false;
        int cnt = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second >= 2)
            {
                two = true;
                ans++;
            }
            else if (it->second == 1)
            {
                one++;
            }
            cnt++;
        }
        cout << ans + ceil(one / 2.0) << endl;
    }
    return 0;
}