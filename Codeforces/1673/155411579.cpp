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
        string s;
        cin >> s;
        int len = s.length();
        ll ans = 0;
        ll ans1 = 0;
        if (len % 2 == 0)
        {
            for (char c : s)
            {
                ans += (c - 'a' + 1);
            }
            cout << "Alice " << ans << endl;
        }
        else if (len == 1)
        {
            ans += (s[0] - 'a' + 1);
            cout << "Bob " << ans << endl;
        }
        else
        {
            for (char c : s)
            {
                ans += (c - 'a' + 1);
            }
            ll temp = ans;
            ans = max(ans - (s[0] - 'a' + 1), ans - (s[len - 1] - 'a' + 1));
            temp -= ans;
 
            if(temp < ans)
            {
                cout << "Alice " << ans - temp << endl;
            }
            else
            {
                cout << "Bob " << temp - ans << endl;
            }
        }
    }
    return 0;
}