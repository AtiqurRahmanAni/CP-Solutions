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
int check(vector<string>&ind, int k)
{
    int ans = 0;
    for (char c = 'a'; c <= 'z'; c++)
    {
        int cnt = 0;
        for (int i = 0; i < ind.size(); i++)
        {
            for(char x : ind[i])
            {
                if(x == c)
                {
                    cnt++;
                }
            }
        }
        if(cnt == k)
        {
            ans++;
        }
    }
    return ans;
}
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
        freopen("inputf.txt", "r", stdin);
#endif

    int n, k;
    cin >> n >> k;
    vector<string> vec(n);
    set<char> st;

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        for (char x : vec[i])
        {
            st.insert(x);
        }
    }
    int ans = 0;
    for (int i = 1; i < powl(2, n); i++)
    {
        vector<string> ind;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                ind.push_back(vec[j]);
            }
        }
        ans = max(ans, check(ind, k));
    }
    cout << ans << endl;
    return 0;
}
