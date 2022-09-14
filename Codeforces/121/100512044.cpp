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
#define line cout<<endl
using namespace std;
set<ll>st;
ll l, r;
void luckey(ll n)
{
 st.insert(n);
 if (n < r)
 {
  luckey(n * 10 + 4);
  luckey(n * 10 + 7);
 }
}
int main()
{
 fastIO
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 clock_t start, end;
 start = clock();
#endif
 
 
 cin >> l >> r;
 luckey(0);
 vector<ll>vec;
 for (auto it = st.begin(); it != st.end(); it++)
 {
  if (*it == 0)
  {
   continue;
  }
  vec.push_back(*it);
 }
 ll ans=0;
 ll last=l-1;
 ll cnt;
 for(ll x: vec)
 {
  //cout<<x<<endl;
  if(l>x)
   continue;
  if(x<r)
  { cnt=((x-last)*x);
   last=x;
   ans+=cnt;
  }
  else if(x==r)
  {
   cnt=((x-last)*x);
   last=x;
   ans+=cnt;
  }
  else
  {
   ans+=((r-last)*x);
   break;
  }
 }
 cout<<ans<<endl;
 
#ifndef ONLINE_JUDGE
 end = clock();
 printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
 return 0;
}