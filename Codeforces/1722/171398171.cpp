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
        int n;
        string s;
        cin >> n;
        cin >> s;
        ll maxans = 0;
        deque<int> l;
        deque<int> r;
        vector<ll> ans;
        vector<int> pos;
        vector<int> pos1;
        vector<pair<int,int>> newans;
        ll initans = 0;
        int cnt = 0;
 
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                initans += i;
                pos.push_back(i);
            }
            else
            {
                initans += (n - i - 1);
                pos.push_back((n - i - 1));
            }
            if (i < n / 2)
            {
                if (s[i] == 'L')
                {
                    cnt++;
                    pos1.push_back(i);
                    newans.push_back({n - i - 1, i});
                    s[i] = 'R';
                }
                continue;
            }
            if (n % 2 == 0 && i >= n / 2)
            {
                if (s[i] == 'R')
                {
                    cnt++;
                    pos1.push_back(i);
                    newans.push_back({i, i});
                    s[i] = 'L';
                }
            }
            else if (n % 2 == 1 && i > n / 2)
            {
                if (s[i] == 'R')
                {
                    cnt++;
                    pos1.push_back(i);
                    newans.push_back({i, i});
                    s[i] = 'L';
                }
            }
        }
        cnt = 0;
        sort(newans.rbegin(), newans.rend());
        for (int i = 0; i < pos1.size(); i++)
        {
            initans -= pos[newans[i].second];
            initans += newans[i].first;
            cout << initans << " ";
            cnt++;
        }
        while (true)
        {
            if (n == cnt)
            {
                break;
            }
            cnt++;
            cout << initans << ' ';
        }
 
        // cout << initans;
 
        line;
    }
 
    return 0;
}