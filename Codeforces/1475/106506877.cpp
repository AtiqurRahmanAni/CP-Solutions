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
  int a,b,k;
  cin>>a>>b>>k;
  int ara1[k],ara2[k];
  int maxi1=0;
  int maxi2=0;
  for(int i=0;i<k;i++)
  {
   cin>>ara1[i];
   maxi1=max(ara1[i],maxi1);
  }
  for(int i=0;i<k;i++)
  {
   cin>>ara2[i];
   maxi2=max(ara2[i],maxi2);
  }
  vector<int>boy(maxi1+1);
  vector<int>girl(maxi2+1);
  for(int i=0;i<k;i++)
  {
   boy[ara1[i]]++;
   girl[ara2[i]]++;
  }
  ll sum=0;
  for(int i=0;i<k;i++)
  {
   sum+=((k-1)-(boy[ara1[i]]-1)-(girl[ara2[i]]-1));
  }
  cout<<sum/2<<endl;
 }
 
 
#ifndef ONLINE_JUDGE
 end = clock();
 printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
 return 0;
}