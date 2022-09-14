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
 
 
 int n,m;
 cin>>n>>m;
 int i=1;
 int sum=0;
 while(true)
 {
  sum+=i;
  // cout<<i<<" "<<sum<<endl;
  i++;
  if(i==n+1)
  {
   i=1;
  }
  if(m-sum==i)
  {
   sum=m;
   break;
  }
  else if(m-sum<i)
  {
   //sum-=i;
   break;
  }
 }
 cout<<m-sum<<endl;
 return 0;
}