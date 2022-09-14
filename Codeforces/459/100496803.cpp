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
#define line cout<<endl
typedef long long ll;
typedef long long ull;
ll MOD = 1000000007;
using namespace std;
int fx[] = {1, -1, 0, 0};
int fy[] = {0, 0, -1, 1};
vector<int>vec;
ll test(ll n)
{
    int res = log2(n) - 1;
    int res2 = res - 1;
    for (int i = 1; i <= res2; i++)
        vec.push_back(0);
    vec.push_back(1);
    ll ans1 = powl(2, res + 1);
    return (n - ans1);
}
double distance(int x1, int y1, int x2, int y2)
{
    return sqrt(powl((x1 - x2), 2) + powl((y1 - y2), 2));
}
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int x1, x2, y1, y2, x3, y3, y4, x4;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 != x2 and y1 != y2 and abs(x1 - x2) != abs(y1 - y2))
    {
        cout << -1 << endl;
    }
    else if (x1 == x2)
    {
        cout << x1 + abs(y1 - y2) << " " << y1 << " " << x2 + abs(y1 - y2) << " " << y2 << endl;
    }
    else if (y1 == y2)
    {
        cout << x1 << " " << y1 + abs(x1 - x2) << " " << x2 << " " << y2 + abs(x1 - x2)<< endl;
    }
    else
    {
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
    }
    return 0;
}