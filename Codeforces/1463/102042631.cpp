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
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll LCM(vector<int>vec)
{
    int sz = vec.size();
    ll lcm = vec[0];
    for (int i = 1; i < sz; i++)
    {
        lcm = ((lcm * vec[i]) / gcd(vec[i], lcm));
    }
    return lcm;
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
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ara[n];
        ll even=0,odd=0;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            if(i&1)
                odd+=ara[i];
            else
                even+=ara[i];
        }
        if(even<odd)
        {
            for(int i=0;i<n;i++)
            {
                if(i%2==0)
                    cout<<1<<" ";
                else
                    cout<<ara[i]<<" ";
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(i&1)
                    cout<<1<<" ";
                else
                    cout<<ara[i]<<" ";
            }
        }
        line;
    }
 
 
#ifndef ONLINE_JUDGE
    end = clock();
    printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
    return 0;
}