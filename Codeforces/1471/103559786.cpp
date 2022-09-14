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
#define inf 2e18
typedef long long ll;
typedef unsigned long long ull;
#define line cout<<endl
using namespace std;
int fy[] = {0, 0, 1, -1};
int fx[] = { -1, 1, 0, 0};
int ara[1001];
int graph[1001][1001];
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
        int n, x, xx;
        cin >> n >> x;
        ll ara[n];
        ll sum = 0;
        map<int,int>mp;
        for (int i = 0; i < n; i++)
        {
            cin>>ara[i];
            ll xx = ara[i];
            mp[i]=0;
            while(xx%x==0)
            {
                mp[i]++;
                xx/=x;
            }
        }
        int ind,mini=2e9;
        for(auto pr:mp)
        {
            if(mini>pr.second)
            {
                ind = pr.first;
                mini=pr.second;
            }
        }
        for(int i=0;i<n;i++)
        {
            sum+=(ara[i]*(mini+1));
        }
        for(int i=0;i<ind;i++)
        {
            sum+=ara[i];
        }
        cout << sum << endl;
    }
 
 
 
#ifndef ONLINE_JUDGE
    end = clock();
    printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
    return 0;
}