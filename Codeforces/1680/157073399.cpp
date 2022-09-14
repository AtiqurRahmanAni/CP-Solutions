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
void printVec(vector<string> &vec)
{
    for (string x : vec)
    {
        cout << x << endl;
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
        int l1, l2, r1, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        if (r1 >= l2)
        {
            if (l1 > l2 && r2 < l1)
                cout << l1 + l2 << endl;
            else if (l1 > l2 && r2 >= l1)
                cout << l1 << endl;
            else
                cout << l2 << endl;
        }
        else if (l2 > r1)
        {
            cout << l2 + l1 << endl;
        }
    }
 
    return 0;
}