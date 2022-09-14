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
typedef unsigned long long ull;
using namespace std;
int main()
{
 fastIO
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
#endif
 
 
 int n,m;
 cin>>n>>m;
 char ara[n][m];
 set<int>st,st1;
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<m;j++)
  {
   cin>>ara[i][j];
   if(ara[i][j]=='S')
   {
    st.insert(i);
    st1.insert(j);
   }
  }
 }
 int ans=0;
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<m;j++)
  {
   if(ara[i][j]=='.' && st.count(i)==false)
   {
    ans++;
    ara[i][j]='*';
   }
  }
 }
 for(int i=0;i<m;i++)
 {
  for(int j=0;j<n;j++)
  {
   if(ara[j][i]=='.' && st1.count(i)==false)
   {
    ans++;
    ara[j][i]='*';
   }
  }
 }
 cout<<ans<<endl;
 return 0;
}