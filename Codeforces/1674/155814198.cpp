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
 
        int ind = 0;
        if (n & 1)
        {
            ind = 1;
        }
 
        for (int i = ind; i < n; i += 2)
        {
            if (vec[i] > vec[i + 1])
            {
                swap(vec[i], vec[i + 1]);
            }
        }
 
        bool ok = true;
 
        for (int i = 1; i < n; i++)
        {
            if (vec[i - 1] > vec[i])
            {
                ok = false;
                break;
            }
        }
 
        // cout << "HELLO\n";
        cout << (ok ? "YES\n" : "NO\n");
    }
 
    return 0;
}