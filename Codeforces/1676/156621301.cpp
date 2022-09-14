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
        string s;
        cin >> s;
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < 3; i++)
        {
            sum1 += s[i] - '0';
        }
        for (int i = 3; i < 6; i++)
        {
            sum2 += s[i] - '0';
        }
 
        if(sum1 == sum2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
 
    return 0;
}