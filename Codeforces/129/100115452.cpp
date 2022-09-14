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
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
typedef long long ll;
typedef long long ull;
ll MOD = 1000000007;
using namespace std;
int fx[] = {1, -1, 0, 0};
int fy[] = {0, 0, -1, 1};
ll sum(ll n)
{
    return (n * (n + 1)) / 2;
}
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    int n,x;
    cin >> n;
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if (x & 1)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    if (odd % 2 == 0)
    {
        cout << even << endl;
    }
    else if (odd & 1)
    {
        cout<<odd<<endl;
    }
    return 0;
}