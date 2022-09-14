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
#define inf 2e18
typedef long long ll;
typedef unsigned long long ull;
#define line cout<<'\n'
using namespace std;
int fy[] = {0, 0, 1, -1};
int fx[] = { -1, 1, 0, 0};
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
  int n;
  cin>>n;
  ll ara[n+1],dp[n+1];
  dp[0]=0;
  for(int i=1;i<=n;i++)
  {
   dp[i]=0;
   cin>>ara[i];
  }
  dp[n]=ara[n];
  for(int i=n-1;i>=1;i--)
  {
   if(i+ara[i]<=n)
   {
    dp[i]=ara[i]+dp[i+ara[i]];
   }
   else
   {
    dp[i]=ara[i];
   }
  }
  // for(int i=1;i<=n;i++)
  // {
  //  cout<<dp[i]<<" ";
  // }
  cout<<*max_element(dp,dp+n+1)<<endl;
 
 }
 
 
#ifndef ONLINE_JUDGE
 end = clock();
 printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
 return 0;
}