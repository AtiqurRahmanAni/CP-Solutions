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
  int ans =0;
  string s;
  cin>>s;
  int sz = s.size();
  if(sz==1)
  {
   cout<<0<<endl;
   continue;
  }
  if(sz == 2 and s[0]==s[1])
  {
   cout<<1<<endl;
   continue;
  }
  for(int i=1;i<sz;i++)
  {
   if(s[i-1]==s[i] or ((i-2)>=0 and s[i-2]==s[i]))
   {
    s[i]='.';
    ans++;
   }
  }
  // for(int i=0;i<sz;i++)
  // {
  //  ans+=(s[i]=='.');
  // }
  cout<<ans<<endl;
 }
 
#ifndef ONLINE_JUDGE
 end = clock();
 printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
 return 0;
}