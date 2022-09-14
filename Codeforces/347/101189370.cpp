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
 
 int n;
 cin >> n;
 int ara[n];
 map<int, int>mp;
 int ans=n;
 for (int i = 0; i < n; i++)
 {
  cin >> ara[i];
  if(ara[i]!=i)
  {
   mp[ara[i]]=i;
   ans--;
  }
  else
  {
   mp[ara[i]]=-1;
  }
 }
 int flag=0;
 for(auto a : mp)
 {
  //cout<<a.first<<" "<<a.second<<endl;
  if(a.second!=-1)
  {
   if(mp[a.second]==a.first and a.second==mp[a.first])
   {
    flag=2;
    break;
   }
   else if(mp[a.second]==a.first or a.second==mp[a.first])
   {
    flag=1;
   }
  }
 }
 cout<<ans+flag<<endl;
 
 
#ifndef ONLINE_JUDGE
 end = clock();
 printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
 return 0;
}