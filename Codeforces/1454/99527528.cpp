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
        ll n;
        vector<pair<int, ll>> vec;
        cin >> n;
        for (ll i = 2; i * i <= n; i++)
        {
            int cnt = 0;
            if (n % i == 0)
            {
                while (n % i == 0)
                {
                    n /= i;
                    cnt++;
                }
                //cout << i << "^" << cnt << " ";
                vec.push_back({cnt, i});
            }
        }
        if (n > 1)
        {
            //cout << n << endl;
            vec.push_back({1, n});
        }
      //cout<<endl;
        sort(vec.rbegin(),vec.rend());
        vector<ll>ans(vec[0].first,vec[0].second);
        for(int i=1;i<vec.size();i++)
        {
            int x=vec[i].first;
            //cout<<vec[i].second<<endl;
            for(int j=0;j<x;j++)
            {
                ans.back()*=vec[i].second;
            }
        }
        cout<<ans.size()<<endl;
        for(ll x : ans)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
 
    return 0;
}