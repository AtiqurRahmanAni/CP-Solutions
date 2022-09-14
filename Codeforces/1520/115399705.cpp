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
 cin>>t;
 while(t--)
 {
  int n;
  cin>>n;
  vector<vector<int>> matrix(n,vector<int>(n,0));
  int cnt1=1;
  int cnt2=2;
  for(int i=0;i<n;i++)
  {
   for(int j=0;j<n;j++)
   {
    if(cnt1<=n*n)
    {
     matrix[i][j]=cnt1;
     cnt1+=2;
    }
    else
    {
     matrix[i][j]=cnt2;
     cnt2+=2;
    }
   }
  }
  if(n==2)
  {
   cout<<-1<<endl;
   continue;
  }
  printVec(matrix);
 }
 
 return 0;
}