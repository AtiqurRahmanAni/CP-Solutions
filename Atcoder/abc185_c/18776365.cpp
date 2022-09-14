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
#define inf 2e5
typedef long long ll;
typedef unsigned long long ull;
#define line cout<<endl
using namespace std;
int fy[] = {0, 0, 1, -1};
int fx[] = { -1, 1, 0, 0};
ll dp[300][300];
ll solve(ll i, ll n, ll cuts)
{
    if (i > n)
        return 0;
    if (cuts == 0)
        return 1;
    if (dp[i][cuts] != -1)
        return dp[i][cuts];
    ll ans = 0;
    for (int j = i + 1; j < n; j++)
    {
        ans += solve(j, n, cuts - 1);
    }
    return dp[i][cuts] = ans;
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

    ll n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    cout << solve(0LL, n, 11LL) << endl;



#ifndef ONLINE_JUDGE
    end = clock();
    printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
    return 0;
}