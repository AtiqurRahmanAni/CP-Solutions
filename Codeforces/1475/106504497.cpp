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
  ll n;
  cin>>n;
  if(n==1)
  {
   cout<<"NO\n";
   continue;
  }
  if(n&1)
  {
   cout<<"YES\n";
   continue;
  }
  ll temp=log2(n);
  ll temp1=1;
  for(int i=1;i<=temp;i++)
  {
   temp1*=2;
  }
  //cout<<temp1<<endl;
  if(temp1==n)
  {
   cout<<"NO\n";
  }
  else
  {
   cout<<"YES\n";
  }
  
 }
 
 
#ifndef ONLINE_JUDGE
 end = clock();
 printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
 return 0;
}