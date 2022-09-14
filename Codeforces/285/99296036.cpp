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
#include <functional>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
typedef long long ll;
using namespace std;
int fx[] = {1, -1, 0, 0};
int fy[] = {0, 0, -1, 1};
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    int n;
    cin >> n;
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ara[i];
    }
    sort(ara, ara + n);
    int x = 1;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (ara[i] != x)
        {
            ans += abs(ara[i] - x);
        }
        x++;
    }
    cout<<ans<<endl;
    return 0;
}