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
 
 int t, n;
 cin >> t;
 while (t--)
 {
  int k;
  cin >> n>>k;
  int ara[n];
  for (int i = 0; i < n; i++)
  {
   cin>>ara[i];
  }
  for(int i=0;i<n-1;i++)
  {
   if(ara[i]==0)
    continue;
   int temp=min(k,ara[i]);
   int t1=ara[i];
   ara[i]-=temp;
   k-=temp;
   ara[n-1]+=temp;
   if(k==0)
    break;
  }
 
  for(int i=0;i<n;i++)
  {
   cout<<ara[i]<<' ';
  }
  line;
 }
 
 return 0;
}