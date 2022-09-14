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
typedef long long ll;
using namespace std;
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    
    int n,h,m;
    cin>>n;
    map<pair<int,int>,int>mp;
    for(int i=0;i<n;i++)
    {
     cin>>h>>m;
     mp[{h,m}]++;
    }
    int ans=0;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
     ans=max(ans,it->second);
    }
    cout<<ans<<endl;
    return 0;
}