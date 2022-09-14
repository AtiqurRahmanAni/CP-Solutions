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
        int n, maxi, x;
        cin >> n;
        bool e1, o1, e2, o2;
        e1 = o1 = e2 = o2 = false;
        vector<int> vec(n);
 
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            if(i & 1)
            {
                if(vec[i] & 1)
                {
                    o1 = true;
                }
                else
                {
                    e1 = true;
                }
            }
            else
            {
                if (vec[i] & 1)
                {
                    o2 = true;
                }
                else
                {
                    e2 = true;
                }
            }
        }
        if((o1 && e1) || (o2 && e2))
        {
            cout << "no\n";
        }
        else
        {
            cout << "yes\n";
        }
    }
 
    return 0;
}