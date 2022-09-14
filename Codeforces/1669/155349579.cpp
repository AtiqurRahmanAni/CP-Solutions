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
        int n, m;
        cin >> n >> m;
        char ara[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> ara[i][j];
            }
        }
 
        for (int j = 0; j < m; j++)
        {
            for (int i = n - 1; i >= 0; i--)
            {
                // cout << ara[i][j];
                if (ara[i][j] == '*')
                {
                    int pos = i;
                    for (int k = i + 1; k < n; k++)
                    {
                        if (ara[k][j] == 'o' || ara[k][j] == '*')
                        {
 
                            if (k - 1 != pos)
                            {
                                ara[k - 1][j] = '*';
                                ara[pos][j] = '.';
                            }
                            break;
                        }
                        else if (k == n - 1)
                        {
                            if (k != pos)
                            {
                                ara[k][j] = '*';
                                ara[pos][j] = '.';
                            }
                        }
                    }
                    // for (int i = 0; i < n; i++)
                    // {
                    //     for (int j = 0; j < m; j++)
                    //     {
                    //         cout << ara[i][j];
                    //     }
                    //     line;
                    // }
                    // line;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << ara[i][j];
            }
            line;
        }
        // line;
    }
    return 0;
}