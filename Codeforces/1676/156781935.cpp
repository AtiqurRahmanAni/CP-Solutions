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
int binSearch(vector<int> &cumSum, int x)
{
    int low = 0;
    int high = cumSum.size() - 1;
    int ind = 0;
    while (low <= high)
    {
        int mid = low + ((high - low) >> 1);
        if (cumSum[mid] >= x)
        {
            ind = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ind + 1;
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
        int n, m;
        cin >> n >> m;
        vector<int> vec(n);
        vector<int> cumSum(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        sort(vec.rbegin(), vec.rend());
        cumSum[0] = vec[0];
        for (int i = 1; i < n; i++)
        {
            cumSum[i] += cumSum[i - 1] + vec[i];
        }
        // printVec(cumSum);
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            if (x > cumSum[n - 1])
            {
                cout << -1 << endl;
                continue;
            }
 
            cout << binSearch(cumSum, x) << endl;
        }
    }
 
    return 0;
}