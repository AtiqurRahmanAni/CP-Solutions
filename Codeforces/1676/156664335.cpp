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
int findMin(vector<string> &vec, int n, int m)
{
    int mini = INT32_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = 0;
            for (int k = 0; k < m; k++)
            {
                // cout << abs(vec[i][k] - vec[j][k]) << endl;
                sum += abs(vec[i][k] - vec[j][k]);
            }
            mini = min(sum, mini);
        }
    }
    return mini;
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
        int n, m;
        cin >> n >> m;
        // cout << n << endl;
        vector<string> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            // cout << vec[i] << endl;
        }
 
        // printVec(vec);
        int ans = findMin(vec, n, m);
 
        cout << ans << endl;
    }
 
    return 0;
}