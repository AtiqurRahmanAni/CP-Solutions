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
  int n;
  cin >> n;
  string s;
  for (int i = 0; i < n; i++)
  {
   char ch;
   cin >> ch;
   if (s.size() == 0)
    s.push_back(ch);
   else if (s.back() != ch)
   {
    s.push_back(ch);
   }
  }
  set<char>track;
  int flag = 0;
  for (int i = 0; i < s.size(); i++)
  {
   if (track.count(s[i]))
   {
    flag = 1;
    break;
   }
   else
   {
    track.insert(s[i]);
   }
  }
  if (!flag)
   cout << "YES\n";
  else
   cout << "NO\n";
 
 }
 return 0;
}