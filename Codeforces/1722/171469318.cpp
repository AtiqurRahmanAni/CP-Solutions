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
 
int check(string s, map<string, int> &m1, map<string, int> &m2)
{
    int flag1 = 0;
    int flag2 = 0;
    if (m1[s])
    {
        flag1 = 1;
    }
    if (m2[s])
    {
        flag2 = 1;
    }
    if (flag1 + flag2 == 2)
    {
        return 0;
    }
    if (flag1 + flag2 == 0)
    {
        return 3;
    }
    else if (flag1 + flag2 == 1)
    {
        return 1;
    }
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
        int n;
        cin >> n;
        vector<vector<string>> ste(3);
        map<string, int> m1;
        map<string, int> m2;
        map<string, int> m3;
        string s;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> s;
                ste[i].push_back(s);
                if (i == 0)
                {
                    m1[s]++;
                }
                else if (i == 1)
                {
                    m2[s]++;
                }
                if (i == 2)
                {
                    m3[s]++;
                }
            }
            // sort(ste[i].begin(), ste[i].end());
        }
 
        int ans;
        for (int i = 0; i < 3; i++)
        {
            ans = 0;
            for (int j = 0; j < n; j++)
            {
                // cout << "hello\n";
                if (i == 0)
                {
                    ans += check(ste[i][j], m2, m3);
                }
                else if (i == 1)
                {
                    ans += check(ste[i][j], m1, m3);
                }
                else if (i == 2)
                {
                    ans += check(ste[i][j], m1, m2);
                }
            }
            cout << ans << " ";
        }
        line;
    }
 
    return 0;
}