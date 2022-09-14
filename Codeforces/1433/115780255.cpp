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
void printVec(vector<pair<int, int>>&vec)
{
 int sz = vec.size();
 for (int i = 1; i < sz; i++)
 {
  cout << vec[i].first << " " << vec[i].second << endl;
 }
 line;
}
int h, w;
int ans = 0;
int matrix[16][16];
bool ok()
{
 for (int i = 0; i < h; i++)
 {
  for (int j = 0; j < w; j++)
  {
   if (matrix[i][j] == 0)
    return false;
  }
 }
 return true;
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
  int n;
  cin >> n;
  int ara[n];
  vector<pair<int, int>> v;
  int x, ind = -1;
  for (int i = 0; i < n; ++i)
  {
   cin >> ara[i];
   if (ara[0]!= ara[i] && i > 0)
   {
    ara[i]=-1;
    v.push_back({1, i+1});
    ind = i;
   }
  }
  if (ind == -1)
  {
   cout << "No\n";
   continue;
  }
  cerr<<ind<<endl;
  ara[0]=-1;
  for (int i = 0; i < n; ++i)
  {
 
   if (ara[ind] != ara[i] and ara[i]!=-1)
   {
    v.push_back({ind+1, i+1});
   }
  }
  cout << "Yes\n";
  for (auto p : v)
  {
   cout << p.first << ' ' << p.second << endl;
  }
 }
 return 0;
}