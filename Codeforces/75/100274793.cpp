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
 
    int a, b;
    cin >> a >> b;
    int ans = a + b;
    string s1 = to_string(a);
    string s2 = to_string(b);
    string s3 = to_string(ans);
    int aa = 0 , bb = 0 , ans1=0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != '0')
        {
            aa *= 10;
            aa += (s1[i]-'0');
        }
    }
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] != '0')
        {
            bb *= 10;
            bb += (s2[i]-'0');
        }
    }
    for (int i = 0; i < s3.size(); i++)
    {
        if (s3[i] != '0')
        {
            ans1 *= 10;
            ans1 += (s3[i]-'0');
        }
    }
    if(aa+bb==ans1)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}