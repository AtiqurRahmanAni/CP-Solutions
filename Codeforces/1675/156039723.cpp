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
        int n;
        cin >> n;
        vector<int> vec(n);
 
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        int cnt = 0;
        bool ok = true;
        int zero = 0;
        int ind = -1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (vec[i] >= vec[i + 1])
            {
                while (vec[i] >= vec[i + 1])
                {
                    cnt++;
                    vec[i] >>= 1;
                    if (vec[i] == 0)
                    {
                        break;
                    }
                }
            }
        }
        zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (vec[i] == 0)
            {
                ind = max(ind, i);
                zero++;
            }
        }
 
        if (ind > 0 || zero > 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << cnt << endl;
        }
    }
 
    return 0;
}