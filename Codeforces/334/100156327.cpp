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
 
 
 int n;
 cin>>n;
 int ara[n][n];
 int flag=1;
 int x=1;
 for(int i=0;i<n;i++)
 {
  if(flag)
  {
   for(int j=0;j<n;j++)
   {
    ara[j][i]=x++;
   }
   flag=0;
  }
  else
  {
   for(int j=n-1;j>=0;j--)
   {
    ara[j][i]=x++;
   }
   flag=1;
  }
 }
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
   cout<<ara[i][j]<<" ";
  }
  cout<<endl;
 }
 return 0;
}