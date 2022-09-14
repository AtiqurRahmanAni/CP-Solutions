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
  int w,h,n;
  cin>>w>>h>>n;
  if(n<=1)
  {
   cout<<"YES\n";
   continue;
  }
  if(w&1 and h&1)
  {
   cout<<"NO\n";
   continue;
  }
  int sum1=1;
  while(w%2==0)
  {
   sum1*=2;
   w/=2;
  }
  while(h%2==0)
  {
   sum1*=2;
   h/=2;
  }
  if(sum1>=n)
   cout<<"YES\n";
  else
   cout<<"NO\n";
 }
 
#ifndef ONLINE_JUDGE
 end = clock();
 printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
 return 0;
}