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
 
    int n;
    cin>>n;
    int need=abs(n-10);
    if(need==0 || n<10)
    {
        cout<<0<<endl;
    }
    else if(need>=1 && need<10)
    {
        cout<<4<<endl;
    }
    else if(need==10)
    {
        cout<<15<<endl;
    }
    else if(need>11)
    {
        cout<<0<<endl;
    }
    else if(need==11)
    {
        cout<<4<<endl;
    }
    else
    {
        cout<<16<<endl;
    }
    return 0;
}