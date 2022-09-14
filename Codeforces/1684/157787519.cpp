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
 
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
        freopen("inputf.txt", "r", stdin);
#endif
 
    // cout << -5 % 2 << endl;
    int t;
    string vowel = "aeiou";
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> vec(n, vector<int>(m));
        bool ok = true;
        bool flag = true;
        int row;
        int a = -1, b = -1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> vec[i][j];
                if (j > 0 && vec[i][j - 1] > vec[i][j] && flag)
                {
                    ok = false;
                    row = i;
                    flag = false;
                }
            }
        }
 
        if (ok)
        {
            cout << "1 1\n";
            continue;
        }
 
        vector<int> temp(vec[row]);
        sort(temp.begin(), temp.end());
        // printVec(temp);
        // printVec(vec[row]);
        int cnt = 0;
        for (int i = 0; i < m; i++)
        {
            if (vec[row][i] != temp[i])
            {
                for (int j = i + 1; j < m; j++)
                {
                    if (temp[i] == vec[row][j] && temp[j] == vec[row][i])
                    {
                        cnt++;
                        a = i;
                        b = j;
                        // cout << a << "++" << b << endl;
                        break;
                    }
                }
            }
            if (cnt)
            {
                break;
            }
        }
 
        if (a == -1 || b == -1)
        {
            cout << -1 << endl;
            continue;
        }
 
        bool ok1 = true;
 
        for (int i = 0; i < n; i++)
        {
            swap(vec[i][a], vec[i][b]);
        }
 
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (vec[i][j - 1] > vec[i][j])
                {
                    ok1 = false;
                    break;
                }
            }
            if (!ok1)
            {
                break;
            }
        }
 
        if (ok1)
        {
            cout << a + 1 << " " << b + 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}