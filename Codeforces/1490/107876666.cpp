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
set<ll>st;
void precalculate()
{
    for(ll i=1;i<=10000;i++)
    {
        st.insert(i*i*i);
    }
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
    precalculate();
    while (t--)
    {
 
        bool ok=false;
        ll n;
        cin >> n;
        ll a = sqrt(n);
        for(ll i = 1;i<=10000 ;i++)
        {
           ll rem = n-(i*i*i);
           if(st.find(rem)!=st.end())
           {
                ok=true;
                break;
           }
 
        }
        if(ok)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
 
    }
 
 
#ifndef ONLINE_JUDGE
    end = clock();
    printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
    return 0;
}