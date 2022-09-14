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
 
    int n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int last = -1, x;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (last == x)
                continue;
            last = x;
            v.push_back(x);
        }
        map<int,int>mp;
        for (int a : v)
        {
            mp[a]++;
        }
        mp[v[0]]--;
        mp[v[v.size()-1]]--;
        int ans=2e5;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            ans=min(ans,it->second+1);
        }
        cout<<ans<<endl;
    }
 
    return 0;
}