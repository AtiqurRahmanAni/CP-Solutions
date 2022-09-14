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
void printVec(vector<bool> &vec)
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
        int zero = 0;
        int same = 0;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            if (vec[i] == 0)
            {
                zero++;
            }
            mp[vec[i]]++;
        }
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if(it->second > 1)
            {
                same = 1;
            }
        }
            if (zero)
            {
                cout << n - zero << endl;
            }
            else if (same)
            {
                cout << n << endl;
            }
            else
            {
                cout << n + 1 << endl;
            }
    }
 
    return 0;
}