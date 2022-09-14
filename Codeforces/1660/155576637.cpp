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
        map<char, bool> mp;
        int ans = s.size();
 
        for (int i = 0; i < s.size(); i++)
        {
            if(mp[s[i]])
            {
                ans -= 2;
                mp.clear();
            }
            else
            {
                mp[s[i]] = true;
            }
        }
 
        cout << ans << endl;
    }
    
    return 0;
}