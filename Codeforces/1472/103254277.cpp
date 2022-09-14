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
  ll ara[n];
  for(int i=0;i<n;i++)
  {
   cin>>ara[i];
  }
  sort(ara,ara+n,greater<int>());
  ll alice=0,bob=0;
  for (int i = 0; i < n; ++i)
  {
   if(i%2==0 and ara[i]%2==0)
   {
    alice+=ara[i];
   }
   else if(i%2!=0 and ara[i]%2!=0)
   {
    bob+=ara[i];
   }
  }
  if(alice==bob)
  {
   cout<<"Tie\n";
  }
  else if(alice>bob)
  {
   cout<<"Alice\n";
  }
  else
  {
   cout<<"Bob\n";
  }
 }
 
 
#ifndef ONLINE_JUDGE
 end = clock();
 printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
 return 0;
}