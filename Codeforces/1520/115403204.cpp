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
#define line cout<<'\n'
typedef long long ll;
using namespace std;
vector<long double>roots1;
void printVec(vector<long double>&v)
{
 int sz = v.size();
 for (long double x : v)
 {
  cout << x << " ";
 }
 line;
}
void printVec(vector<int>&v)
{
 int sz = v.size();
 for (ll x : v)
 {
  cout << x << " ";
 }
 line;
}
void printVec(vector<vector<int>>&vec)
{
 for (int i = 0; i < vec.size(); i++)
 {
  for (int j = 0; j < vec[i].size(); j++)
  {
   cout << vec[i][j] << " ";
  }
  line;
 }
 //line;
}
void print(vector<pair<double, double>>&vec)
{
 int sz = vec.size();
 for (int i = 1; i < sz; i++)
 {
  cout << vec[i].first << " " << vec[i].second << endl;
 }
 line;
}
int main()
{
 fastIO
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
#endif
 
 
 int t;
 cin >> t;
 while (t--)
 {
  int x,n;
  cin>>n;
  map<int,ll>mp;
  for(int i=0;i<n;i++)
  {
   cin>>x;
   mp[x-(i+1)]++;
  }
  ll ans=0;
  for(auto it = mp.begin();it!=mp.end();it++)
  {
   if(it->second<=1)
    continue;
   ans+=(((it->second-1)*(it->second))/2);
  }
  cout<<ans<<endl;
 }
 return 0;
}