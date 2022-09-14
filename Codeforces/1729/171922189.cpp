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
        char start = s[0];
        char end = s[len - 1];
        map<char, vector<int>> vec;
        int flag = 0;
        if (start > end)
        {
            swap(start, end);
            flag = 1;
        }
        int ans = end - start;
        int ans1 = 0;
        // continue;
        for (int i = 1; i < len; i++)
        {
            if (s[i] >= start && s[i] <= end)
            {
                vec[s[i]].push_back(i + 1);
                ans1++;
            }
        }
 
        cout << ans << ' ' << ans1 + 1 << endl;
        cout << 1 << ' ';
        if (!flag)
        {
            for (auto it = vec.begin(); it != vec.end(); it++)
            {
                for (auto x : it->second)
                {
                    cout << x << ' ';
                }
            }
        }
        else
        {
            for (auto it = vec.rbegin(); it != vec.rend(); it++)
            {
                for (auto x : it->second)
                {
                    cout << x << ' ';
                }
            }
        }
 
        line;
    }
 
    return 0;
}