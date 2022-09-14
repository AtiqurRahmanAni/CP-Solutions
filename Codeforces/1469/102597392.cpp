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
  int maxi1=0;
  int cum1[1000];
  cum1[0]=0;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
   cin>>cum1[i];
   cum1[i]+=cum1[i-1];
   maxi1 = max(maxi1,cum1[i]);
  }
  cin>>n;
  int maxi2=0;
  cum1[0]=0;
  for(int i=1;i<=n;i++)
  {
   cin>>cum1[i];
   cum1[i]+=cum1[i-1];
   maxi2= max(maxi2,cum1[i]);
  }
  cout<<max(0,maxi1+maxi2)<<endl;
 }
 
#ifndef ONLINE_JUDGE
 end = clock();
 printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
 return 0;
}