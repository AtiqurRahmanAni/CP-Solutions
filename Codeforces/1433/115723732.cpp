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
ll solve(ll n)
{
 string s1=to_string(n);
 string s2=s1;
 sort(s1.begin(), s1.end());
 sort(s2.rbegin(), s2.rend());
 return stoll(s2)-stoll(s1);
 
}
int main()
{
 fastIO
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin); 
 freopen("output.txt", "w", stdout);
#endif
 
 
 int t;
 cin>>t;
 while(t--)
 {
  int n,i,j,x,mini=2e9,maxi=0;
  cin>>n;
  int ara[n];
  int pos=-1;
  for(int i=0;i<n;i++)
  {
   cin>>ara[i];
  }
  for(int i=0;i<n;i++)
  {
   if(i>0 and ara[i]>=maxi and ara[i-1]<ara[i])
   {
    maxi=ara[i];
    pos=i+1;
   }
   else if(i<n-1 and ara[i]>=maxi and ara[i+1]<ara[i])
   {
    maxi=ara[i];
    pos=i+1;
   }
   if(ara[i]<mini)
   {
    mini=ara[i];
   }
  }
  if(mini!=maxi)
  {
   cout<<pos<<endl;
  }
  else
  {
   cout<<-1<<endl;
  }
 
 }
 return 0; 
}