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
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
        freopen("inputf.txt", "r", stdin);
#endif
 
    // cout << -5 % 2 << endl;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        int x, alice = INT32_MIN, bob = INT32_MIN;
 
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            alice = max(alice, x);
        }
 
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            bob = max(bob, x);
        }
 
        if (alice == bob)
        {
            cout << "Alice\n";
            cout << "Bob\n";
        }
        else if (alice > bob)
        {
            cout << "Alice\n";
            cout << "Alice\n";
        }
        else
        {
            cout << "Bob\n";
            cout << "Bob\n";
        }
    }
    return 0;
}