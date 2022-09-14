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
void printVec(vector<double>&v)
{
 int sz = v.size();
 for (double x : v)
 {
  cout << x << " ";
 }
 line;
}
void printVec(vector<vector<long double>>&vec)
{
 for (int i = 0; i < vec.size(); i++)
 {
  for (int j = 0; j < vec[i].size(); j++)
  {
   cout << vec[i][j] << " ";
  }
  line;
 }
 line;
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
  int n, x;
  cin >> n;
  map<int, int>mp;
  vector<int> v1, v2;
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
   cin >> x;
   mp[x]++;
  }
  priority_queue<int>q;
  for (auto it = mp.begin(); it != mp.end(); it++)
  {
   q.push(it->second);
  }
 
  while (q.size() >= 2)
  {
   int cnt1 = q.top();
   q.pop();
   int cnt2 = q.top();
   q.pop();
   cnt1--;
   cnt2--;
   n -= 2;
   if (cnt1)
   {
    q.push(cnt1);
   }
   if (cnt2)
   {
    q.push(cnt2);
   }
  }
  cout<<n<<endl;
 }
 return 0;
}