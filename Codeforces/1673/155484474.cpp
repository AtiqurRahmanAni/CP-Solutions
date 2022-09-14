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
        set<char> st;
        map<char, int> mp;
        cin >> s;
 
        for (char i = 'a'; i <= 'z'; i++)
        {
            mp[i] = -1;
        }
 
        int len = s.length();
        int mini = INT_MAX;
 
        for (int i = 0; i < len; i++)
        {
            if (mp[s[i]] == -1)
            {
                mp[s[i]] = i;
            }
            else
            {
                mini = min(mini, i - mp[s[i]]- 1);
                mp[s[i]] = i;
            }
            st.insert(s[i]);
        }
 
        if(st.size() == 1)
        {
            cout << "YES\n";
            continue;
        }
        if (mini < len && mini + 1 < st.size())
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}