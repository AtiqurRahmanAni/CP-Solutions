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
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
#define inf 2e9
typedef long long ll;
typedef unsigned long long ull;
#define line cout<<endl
using namespace std;
int fy[] = {0, 0, 1, -1};
int fx[] = { -1, 1, 0, 0};
set<int>st;
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
 
        int n;
        cin >> n;
        vector<int>vec(3,0);
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            vec[x % 3]++;
        }
        bool flag;
        n = n / 3;
        int ans = 0;
        while (true)
        {
            flag = false;
            for (int i = 0; i < 3; i++)
            {
                if (vec[i] > n)
                {
                    flag=true;
                    vec[i]--;
                    ans++;
                    vec[(i + 1) % 3]++;
                }
            }
            if(!flag)
                break;
        }
        cout << ans << endl;
 
    }
 
 
#ifndef ONLINE_JUDGE
    end = clock();
    printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
    return 0;
}