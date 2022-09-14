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
int calpow(int x, int y)
{
    if (y == 0)
        return 1;
    if (y == 1)
        return x;
    int t = calpow(x, y / 2);
    if (y % 2 == 0)
        return t * t;
    return t * t * x;
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
        string s1, s2;
        cin >> s1;
        cin >> s2;
 
        int len1 = s1.size();
        int len2 = s2.size();
 
        int cnt = 0;
        for (int i = 0; i < len2; i++)
        {
            if (s2[i] == 'a')
            {
                cnt++;
            }
        }
        if (cnt == 0)
            cout << (ll)powl(2, len1) << endl;
        else if (cnt == 1 && len2 == 1)
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }
 
    return 0;
}