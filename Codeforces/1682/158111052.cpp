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
        int n;
        cin >> n;
        vector<int> vec(n);
        vector<int> vec1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            vec1[i] = vec[i];
        }
 
        sort(vec1.begin(), vec1.end());
        // printVec(vec1);
        int ans = (1 << 31) - 1;
        // bitset<31> bt(ans);
        // for (int i = 0; i < 31; i++)
        // {
        //     cout << bt[i];
        // }
        // line;
        // continue;
        for (int i = 0; i < n; i++)
        {
            if (vec[i] != vec1[i])
            {
                // cout << vec1[i] << "++" << vec[i] << endl;
                ans &= vec[i];
            }
        }
        // printVec(vec);
        cout << ans << endl;
    }
    return 0;
}