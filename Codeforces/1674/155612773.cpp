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
 
    map<string, int> mp;
    int cnt = 0;
    for (char i = 'a'; i <= 'z'; i++)
    {
        for (char j = 'a'; j <= 'z'; j++)
        {
            if (i != j)
            {
                cnt++;
                string s = "";
                s += i;
                s += j;
                mp[s] = cnt;
                // cout << s << endl;
            }
        }
    }
 
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (y < x)
        {
            cout << 0 << " " << 0 << endl;
            continue;
        }
        else if (x == y)
        {
            cout << 1 << " " << 1 << endl;
        }
        else
        {
            if (y % x == 0)
                cout << 1 << " " << y / x << endl;
            else
                cout << 0 << " " << 0 << endl;
        }
    }
 
    return 0;
}