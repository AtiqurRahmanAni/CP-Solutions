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
#include<iomanip>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
#define inf 2e18
typedef long long ll;
typedef unsigned long long ull;
#define line cout<<'\n'
using namespace std;
int fy[] = {0, 0, 1, -1};
int fx[] = { -1, 1, 0, 0};
void print(vector<int>&vec)
{
 int sz=vec.size();
 for(int i=0;i<sz;i++)
 {
  cout<<vec[i]<<" ";
 }
 line;
}
void print(vector<pair<int,int>>&vec)
{
 int sz=vec.size();
 for(int i=0;i<sz;i++)
 {
  cout<<vec[i].first<<" "<<vec[i].second<<endl;
 }
 line;
}
int main()
{
 fastIO
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 clock_t start, end;
 start = clock();
#endif
 
 
 int t;
 cin>>t;
 while(t--)
 {
  string s;
  int x,y;
  cin>>x>>y;
  cin>>s;
  int x1=0,y1=0;
  int flag=0,flag1=0;
  for(int i=0;i<(int)s.size();i++)
  {
   if(s[i]=='L' and x<0)
   {
    x1--;
   }
   else if(s[i]=='R' and x>0)
   {
    x1++;
   }
   else if(s[i]=='U' and y>0)
   {
    y1++;
   }
   else if(s[i]=='D' and y<0)
   {
    y1--;
   }
   if(x1==x)
   {
    flag=1;
   }
   if(y1==y)
   {
    flag1=1;
   }
  }
  if(flag and flag1)
  {
   cout<<"YES\n";
  }
  else
  {
   cout<<"NO\n";
  }
 }
 
 
#ifndef ONLINE_JUDGE
 end = clock();
 printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
 return 0;
}