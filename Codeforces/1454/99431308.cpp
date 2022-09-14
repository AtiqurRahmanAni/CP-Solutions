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
 
    
    int n,t;
    cin>>t;
    while(t--)
    {
     cin>>n;
     int ara[n+1];
     map<int,vector<int>>mp;
     int ind[n+1];
     for(int i=1;i<=n;i++)
     {
      cin>>ara[i];
      mp[ara[i]].push_back(i);
     }
     int flag=0;
     int cnt=1;
     for(auto it=mp.begin();it!=mp.end();it++)
     {
      if(it->second.size()==1)
      {
       cout<<(it->second)[0]<<endl;
       flag=1;
       break;
      }
      cnt++;
     }
     if(!flag)
      cout<<-1<<endl;
    }
    return 0;
}