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
        string s1;
        char x;
        int a, b, c, d, e;
        a = b = c = d = e = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            // s1.push_back(c);
            if (x == 'T')
            {
                a = 1;
            }
            else if (x == 'i')
            {
                b = 1;
            }
            else if (x == 'm')
            {
                c = 1;
            }
            else if (x == 'u')
            {
                d = 1;
            }
            else if (x == 'r')
            {
                e = 1;
            }
        }
        if (n > 5 || (a + b + c + d + e) < 5)
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