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
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> vec;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        vec.push_back({x,y});
    }
    k--;
    sort(vec.rbegin(),vec.rend());
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(vec[j].first==vec[j+1].first && vec[j].second>vec[j+1].second)
            {
                swap(vec[j],vec[j+1]);
            }
        }
    }
    int x=vec[k].first;
    int y=vec[k].second;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(vec[i].first==x && vec[i].second==y)
        {
            ans++;
        }
        // cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }
    cout<<ans<<endl;
    return 0;
}