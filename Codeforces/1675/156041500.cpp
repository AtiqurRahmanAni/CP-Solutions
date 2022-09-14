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
        // cout << s << endl;
        int one, zero;
        one = -1;
        zero = INT32_MAX;
        int len = s.size();
        for (int i = 0; i < len; i++)
        {
            if (s[i] == '0')
            {
                zero = min(zero, i);
            }
            else if (s[i] == '1')
            {
                one = max(one, i);
            }
        }
        if (one == -1 && zero == INT32_MAX)
        {
            cout << len << endl;
        }
        else
        {
            if (zero == INT32_MAX)
            {
                cout << len - one<< endl;
            }
            else if (one == -1)
            {
                cout << zero + 1 << endl;
            }
            else
            {
                cout << abs(one - zero) + 1 << endl;
            }
        }
    }
 
    return 0;
}