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
int calc(int a, int c, int x)
{
    bool flag = true;
    int temp = x;
    int total = 0;
    while (true)
    {
        if (flag)
        {
            if (temp > a)
            {
                total += a;
                temp -= a;
            }
            else
            {
                total += temp;
                temp = 0;
                break;
            }
            flag = false;
        }
        else
        {
            if (temp > c)
            {
                temp -= c;
            }
            else
            {
                break;
            }
            flag = true;
        }
    }
    return total;
}
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
        freopen("inputf.txt", "r", stdin);
#endif

    int a, b, c, d, e, f, x;
    cin >> a >> b >> c >> d >> e >> f >> x;

    int ans1 = calc(a, c, x);
    int ans2 = calc(d, f, x);
    if (ans1 * b > ans2 * e)
    {
        cout << "Takahashi\n";
    }
    else if (ans1 * b < ans2 * e)
    {
        cout << "Aoki\n";
    }
    else
    {
        cout << "Draw\n";
    }

    return 0;
}
