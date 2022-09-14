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
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    clock_t start, end;
    start = clock();
#endif
 
 
    int n;
    cin>>n;
    int ara[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>ara[i];
    }
    vector<pair<int,int>> vec;
    int q;
    cin>>q;
    int a,b;
    while(q--)
    {
        cin>>a>>b;
        vec.push_back({a,b});
    }
    ll l = 0;
    cout<<ara[vec[0].first]<<endl;
    l=ara[vec[0].first];
    for(int i=1;i<(int)vec.size();i++)
    {
        cout<<max(l+(ll)vec[i-1].second,(ll)ara[vec[i].first])<<endl;
        l = max({l,l+(ll)vec[i-1].second,(ll)ara[vec[i].first]});
 
    }
 
#ifndef ONLINE_JUDGE
    end = clock();
    printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
    return 0;
}