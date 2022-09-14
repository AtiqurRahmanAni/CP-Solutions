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
        string s;
        cin >> n;
        cin >> s;
        // cout << "hello";
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != 'W')
            {
                bool r, b;
                r = b = false;
                int j;
                for (j = i; j < n; j++)
                {
                    if(s[j] == 'W')
                        break;
                    if(s[j] == 'R')
                    {
                        r = true;
                    }
                    else if(s[j] == 'B')
                    {
                        b = true;
                    }
                }
                i = j;
                if(r != b)
                {
                    flag = false;
                }
            }
        }
 
        if (flag)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
 
    return 0;
}