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
 
    map<int, char> mp;
    char letter = 'a';
    for (int i = 1; i <= 26; i++)
    {
        mp[i] = letter++;
    }
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        deque<int> zeroind;
        char c;
 
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            if (c == '0')
            {
                zeroind.push_back(i);
            }
            s += c;
        }
 
        string ans;
 
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                int no;
                no = ((s[i - 2] - '0') * 10) + (s[i - 1] - '0');
                ans.push_back(mp[no]);
                i -= 2;
            }
            else
            {
                ans.push_back(mp[s[i] - '0']);
            }
        }
 
        for (int i = ans.length() - 1; i >= 0; i--)
        {
            cout << ans[i];
        }
        
 
        // int len = zeroind.size();
 
        // if (len == 0)
        // {
        //     for (int i = 0; i < n; i++)
        //     {
        //         cout << mp[s[i] - '0'];
        //     }
        // }
        // else
        // {
        //     for (int i = 0; i < n; i++)
        //     {
        //         if (i + 2 < n && i + 2 == zeroind.front())
        //         {
        //             int no = ((s[i] - '0') * 10) + (s[i + 1] - '0');
        //             cout << mp[no];
        //             i += 2;
        //             zeroind.pop_front();
        //         }
        //         else
        //         {
        //             cout << mp[s[i] - '0'];
        //         }
        //     }
        // }
        line;
    }
 
    return 0;
}