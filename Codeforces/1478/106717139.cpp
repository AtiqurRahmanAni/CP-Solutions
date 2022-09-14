#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
#include<set>
#include<iterator>
#include <map>
#include<cmath>
#include <list>
#include<string>
#include <stdlib.h>
#include<ctime>
#include<cstring>
#include<iomanip>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
#define inf 2e18
typedef long long ll;
typedef unsigned long long ull;
#define line cout<<endl
using namespace std;
int fy[] = {0, 0, 1, -1};
int fx[] = { -1, 1, 0, 0};
bool luckey(int x, int d)
{
    while (x != 0)
    {
        if (x % 10 == d)
        {
            return true;
        }
        x /= 10;
    }
    return false;
}
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    clock_t start, end;
    start = clock();
#endif
 
 
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        vector<int>vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        for (int i = 0; i < n; i++)
        {
            int x = vec[i];
            int flag = 0;
            while (x != 0)
            {
                if (x % 10 == d)
                {
                    cout<<"YES\n";
                    flag=1;
                    break;
                }
                x /= 10;
            }
            if(flag)
                continue;
            x=vec[i];
            for (int j = d; j <= x; j += d)
            {
                if (luckey(x - j, d))
                {
                    cout << "YES\n";
                    flag = 1;
                    break;
                }
            }
            if (!flag)
            {
                cout << "NO\n";
            }
 
        }
    }
 
#ifndef ONLINE_JUDGE
    end = clock();
    printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
    return 0;
}